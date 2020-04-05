using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Rewired;

public class PlayerController : MonoBehaviour {

    public int playerID = 0;

    public GameObject BoardGO;

    public float directionValue = 0.0f;
    public float addedPush = 0.1f;
    public float smooth = 5.0f;

    private Player player;

    // REWIRED
    private bool dPadLeft = false;
    private bool dPadRight = false;


    private void Awake() {
        player = ReInput.players.GetPlayer(playerID);
    }


    private void Update() {
        GetInput();
        ProcessInput();
        BoardRotation();
    }


    private void GetInput() {
        dPadLeft = player.GetButton("Left");
        dPadRight = player.GetButton("Right");
    }


    private void ProcessInput() {
        if (dPadLeft) {
            directionValue -= addedPush;
        }
        
        if (dPadRight) {
            directionValue += addedPush;
        }
    }


    private void BoardRotation() {
        BoardGO.transform.Rotate(0, 0, -directionValue);
    }

}
