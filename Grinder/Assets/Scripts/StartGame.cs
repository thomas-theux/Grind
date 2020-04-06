using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour {

    private void Awake() {
        Cursor.visible = false;
        // AudioManager.instance.Play("Music Grinder");
        SceneManager.LoadScene("1 Main Menu");
    }

}
