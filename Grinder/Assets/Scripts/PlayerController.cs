using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Rewired;
using TMPro;

public class PlayerController : MonoBehaviour {

    public int PlayerID = 0;

    private Rigidbody rb;

    public Camera PlayerCamera;
    public GameObject BoardGO;
    public GameObject GrindParticles;

    public TMP_Text PlayerCountDown;
    public TMP_Text PlayerScoreText;
    public TMP_Text BoardslideText;
    public GameObject BackgroundImage;

    private int playerScore = 0;
    private int pointsPerFrame = 10;

    public bool didBail = false;

    private int currentSide = 0;

    private float torque = 1.0f;
    private float pushFromRail = 750.0f;
    private float megaPush = 3000.0f;
    private float extraForce;
    private float extraForceSpeed = 50.0f;  // the higher the easier

    private float manualForce;
    private float addedForce;

    private float zAngle = 0;
    private float MaxZAngle = 30.0f;
    private float maxAngleRange = 90.0f;
    private float fullCircleAngle = 360.0f;

    private Player player;

    // REWIRED
    private float horizontal;


    private void Start() {
        player = ReInput.players.GetPlayer(PlayerID);
        rb = BoardGO.GetComponent<Rigidbody>();

        AudioManager.instance.Play("Grinding");
    }


    private void FixedUpdate() {
        if (!didBail) {
            if (GameSettings.NavigationMode == 2) {
                GetInput();
            
                CalculateManualForce();
                CalculateAddedForce();
                ApplyOverallForce();

                CheckForAngle();
                CheckCurrentSide();

                IncreasePoints();
            }
        }
    }


    private void GetInput() {
        horizontal = player.GetAxis("Horizontal");
    }


    private void CalculateManualForce() {
        manualForce = -horizontal;
    }


    private void CalculateAddedForce() {
        extraForce += (Time.deltaTime / extraForceSpeed);
        addedForce = (extraForce * -currentSide);
    }


    private void ApplyOverallForce() {
        rb.AddTorque(transform.forward * torque * (manualForce + addedForce));
    }


    private void CheckForAngle() {
        zAngle = BoardGO.transform.localEulerAngles.z;

        bool bailLeft = zAngle > MaxZAngle && zAngle < maxAngleRange;
        bool bailRight = zAngle < fullCircleAngle - MaxZAngle && zAngle > fullCircleAngle - maxAngleRange;

        if (bailLeft || bailRight) {
            ThrowOffBalance();
        }
    }


    private void CheckCurrentSide() {
        if (zAngle >= 0 && zAngle < 180) currentSide = -1;
        else if (zAngle < 360 && zAngle > 180) currentSide = 1;
    }


    private void IncreasePoints() {
        playerScore += pointsPerFrame;
        PlayerScoreText.text = playerScore.ToString("N0");
    }


    private void ThrowOffBalance() {
        didBail = true;
        rb.useGravity = true;

        AudioManager.instance.Stop("Grinding");
        AudioManager.instance.Play("Bail");

        // Push forward
        rb.AddForce(transform.forward * megaPush);

        // Push board off the side where it was going
        rb.AddForce(transform.right * pushFromRail * currentSide);

        GrindParticles.SetActive(false);

        TimeManager.BailedPlayers++;

        if (TimeManager.BailedPlayers == GameSettings.PlayerCount) {
            TimeManager.EndLevel();
        }
    }


    public void DisplayResults() {
        StartCoroutine(DisplayAfterDelay());
    }


    private IEnumerator DisplayAfterDelay() {
        yield return new WaitForSeconds(1.0f);

        AudioManager.instance.Play("Score");

        BackgroundImage.SetActive(true);

        RectTransform newRect = PlayerScoreText.GetComponent<RectTransform>();
        newRect.anchorMin = new Vector2(0.5f, 0.5f);
        newRect.anchorMax = new Vector2(0.5f, 0.5f);
        newRect.pivot = new Vector2(0.5f, 0.5f);

        PlayerScoreText.fontSize = 60;
        BoardslideText.enabled = false;
    }

}
