using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SpawnPlayers : MonoBehaviour {

    public GameObject PlayerInstance;

    public static List<GameObject> AllPlayersArr = new List<GameObject>();
    public static List<TMP_Text> PlayerCountDowns = new List<TMP_Text>();

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

            PlayerCountDowns.Add(playerControllerScript.PlayerCountDown);

            AllPlayersArr.Add(newPlayer);
        }
    }


    public static void CleanSpawnPlayers() {
        AllPlayersArr.Clear();
        PlayerCountDowns.Clear();
    }

}
