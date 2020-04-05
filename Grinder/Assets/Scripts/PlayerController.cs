using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Rewired;

public class PlayerController : MonoBehaviour {

    public int playerID = 0;

    // public Camera PlayerCamera;
    public GameObject BoardGO;
    public GameObject GrindParticles;

    private Rigidbody rb;

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
        player = ReInput.players.GetPlayer(playerID);
        rb = BoardGO.GetComponent<Rigidbody>();
    }


    private void FixedUpdate() {
        if (!didBail) {
            GetInput();
            
            CalculateManualForce();
            CalculateAddedForce();
            ApplyOverallForce();

            CheckForAngle();
            CheckCurrentSide();
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


    private void CheckCurrentSide() {
        if (zAngle >= 0 && zAngle < 180) currentSide = -1;
        else if (zAngle < 360 && zAngle > 180) currentSide = 1;
    }


    private void CheckForAngle() {
        zAngle = BoardGO.transform.localEulerAngles.z;

        bool bailLeft = zAngle > MaxZAngle && zAngle < maxAngleRange;
        bool bailRight = zAngle < fullCircleAngle - MaxZAngle && zAngle > fullCircleAngle - maxAngleRange;

        if (bailLeft || bailRight) {
            ThrowOffBalance();
        }
    }


    private void ThrowOffBalance() {
        didBail = true;
        rb.useGravity = true;

        // Push forward
        // rb.AddForce(transform.forward * megaPush);

        // Push board off the side where it was going
        rb.AddForce(transform.right * pushFromRail * currentSide);

        GrindParticles.SetActive(false);
    }

}
