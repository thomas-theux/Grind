using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Rewired;

public class MenuManager : MonoBehaviour {

    public Canvas ShowControls;
    private bool showingControls = false;

    private Player playerOne;

    // REWIRED
    private bool confirmBTN = false;
    private bool cancelBTN = false;
    private bool controlsBTN = false;

    private bool dpadLeft = false;
    private bool dpadRight = false;

    private float leftStickHorizontal = 0;


    private void Awake() {
        playerOne = ReInput.players.GetPlayer(0);
    }


    private void Update() {
        GetInput();
        ProcessInput();
    }


    private void GetInput() {
        confirmBTN = playerOne.GetButtonDown("Confirm");
        cancelBTN = playerOne.GetButtonDown("Cancel");
        controlsBTN = playerOne.GetButtonDown("Controls");
        
        dpadLeft = playerOne.GetButtonDown("D-Pad Left");
        dpadRight = playerOne.GetButtonDown("D-Pad Right");
        
        leftStickHorizontal = playerOne.GetAxis("Horizontal");
    }


    private void ProcessInput() {
        if (!showingControls) {
            if (confirmBTN) {
                AudioManager.instance.Play("Confirm");

                GameSettings.NavigationMode = 0;

                // If no gamepads are detected then use the number the player put in
                if (GameSettings.ConnectedGamepads < 1) {
                    GameSettings.PlayerCount = GameSettings.ManualPlayerCount;
                } else {
                    GameSettings.PlayerCount = GameSettings.ConnectedGamepads;
                }

                SceneManager.LoadScene("2 Riverside");
            }
        }

        // Show controls
        if (controlsBTN) {
            AudioManager.instance.Play("Show Controls");

            showingControls = !showingControls;
            ShowControls.enabled = showingControls;
        }

    }

}
