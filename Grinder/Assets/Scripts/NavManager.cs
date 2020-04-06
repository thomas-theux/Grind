using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Rewired;

public class NavManager : MonoBehaviour {

    private Player player;

    // REWIRED
    private bool restartBtn = false;
    private bool quitBtn = false;


    private void Awake() {
        player = ReInput.players.GetPlayer(0);
    }


    private void Update() {
        GetInput();

        if (quitBtn) {
            QuitLevel();
        }
        
        if (GameSettings.NavigationMode == 3) {
            if (restartBtn) {
                RestartLevel();
            }
        }
    }


    private void GetInput() {
        restartBtn = player.GetButtonDown("Confirm");
        quitBtn = player.GetButtonDown("Cancel");
    }


    private void QuitLevel() {
        AudioManager.instance.Play("Cancel");
        CleanAllScripts();
        SceneManager.LoadScene("1 Main Menu");
    }


    private void RestartLevel() {
        AudioManager.instance.Play("Restart");
        CleanAllScripts();
        SceneManager.LoadScene("2 Riverside");
    }


    private void CleanAllScripts() {
        // AudioManager.instance.Stop("River Loop");
        AudioManager.instance.Stop("Grinding");
        SpawnPlayers.CleanSpawnPlayers();
        TimeManager.CleanTimeManager();
    }

}
