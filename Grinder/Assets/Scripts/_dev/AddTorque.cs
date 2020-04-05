using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddTorque : MonoBehaviour 
{
    public float torque;
    public Rigidbody rb;


    void Start() {
        rb = GetComponent<Rigidbody>();
    }


    void FixedUpdate() {
        float turn = Input.GetAxis("Horizontal");
        print(turn);
        
        rb.AddTorque(transform.forward * torque * -turn);
    }

}