﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectDestroyer : MonoBehaviour {

    private void OnTriggerEnter(Collider other) {
        if (other.tag == "StreetObject") {
            Destroy(other.gameObject);
        }
    }

}
