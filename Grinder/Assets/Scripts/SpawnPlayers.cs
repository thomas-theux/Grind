using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPlayers : MonoBehaviour {

    public GameObject PlayerInstance;

    private float spawnDistance = 100.0f;


    private void Start() {
        float playerCount = GameSettings.PlayerCount;

        float camWidth = 1 / playerCount;
        float camHeight = 1.0f;
        float camY = 0;

        for (int i = 0; i < GameSettings.PlayerCount; i++) {
            GameObject newPlayer = Instantiate(PlayerInstance);
            PlayerController playerControllerScript = newPlayer.GetComponent<PlayerController>();

            playerControllerScript.PlayerID = i;

            newPlayer.transform.position = new Vector3(
                spawnDistance * i,
                newPlayer.transform.position.y,
                newPlayer.transform.position.z
            );

            Camera playerCam = newPlayer.GetComponent<PlayerController>().PlayerCamera;

            float camX = camWidth * i;

            playerCam.rect = new Rect(camX, camY, camWidth, camHeight);
        }
    }

}
