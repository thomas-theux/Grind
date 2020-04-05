using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Rewired;

public class PlayerController : MonoBehaviour {

    public int playerID = 0;

    public Camera PlayerCamera;

    public GameObject BoardGO;
    public GameObject GrindParticles;
    private Rigidbody rb;

    public bool didBail = false;

    private float torque = 1.0f;
    private float pushFromRail = 250.0f;

    private float zAngle;
    private float MaxZAngle = 30.0f;
    private float maxAngleRange = 90.0f;
    private float fullCircleAngle = 360.0f;

    private Player player;

    // REWIRED
    private float horizontal;


    private void Awake() {
        player = ReInput.players.GetPlayer(playerID);
        rb = BoardGO.GetComponent<Rigidbody>();
    }


    private void FixedUpdate() {
        if (!didBail) {
            GetInput();
            BoardRotation();
            CheckForAngle();
        }
    }


    private void GetInput() {
        horizontal = player.GetAxis("Horizontal");
    }


    private void BoardRotation() {
        rb.AddTorque(transform.forward * torque * -horizontal);
    }


    private void CheckForAngle() {
        zAngle = BoardGO.transform.localEulerAngles.z;

        bool bailLeft = zAngle > MaxZAngle && zAngle < maxAngleRange;
        bool bailRight = zAngle < fullCircleAngle - MaxZAngle && zAngle > fullCircleAngle - maxAngleRange;

        if (bailLeft || bailRight) {
            int whichSide;

            if (bailLeft) whichSide = -1;
            else whichSide = 1;

            ThrowOffBalance(whichSide);
        }
    }


    private void ThrowOffBalance(int whichSide) {
        didBail = true;
        rb.useGravity = true;

        rb.AddForce(transform.right * pushFromRail * whichSide);

        GrindParticles.SetActive(false);
    }

}
