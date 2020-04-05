using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StreetObjectMover : MonoBehaviour {

    private Rigidbody rb;
    private float moveSpeed = 4.0f;

    public PlayerController PlayerControllerScript;


    private void Awake() {
        rb = GetComponent<Rigidbody>();
        rb.velocity = transform.forward * -moveSpeed;
    }


    private void Update() {
        if (PlayerControllerScript) {
            if (PlayerControllerScript.didBail) {
                rb.velocity = Vector3.zero;
            }
        }
    }

}
