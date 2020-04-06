using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeManager : MonoBehaviour {

    private float countDownTimeDef = 3.5f;
    private float countDownTime;

    private bool isTicking = false;
    private bool startCountDown = false;

    private float timeLapse = 1.75f;

    public static int BailedPlayers = 0;


    private void Awake() {
        // AudioManager.instance.Play("River Loop");

        StartCoroutine(InitialDelay());
    }


    private IEnumerator InitialDelay() {
        yield return new WaitForSeconds(1.0f);

        GameSettings.NavigationMode = 1;
    }


    private void Update() {
        if (GameSettings.NavigationMode == 1) {
            if (!startCountDown) {
                startCountDown = true;
                countDownTime = countDownTimeDef;
                isTicking = true;

                for (int i = 0; i < GameSettings.PlayerCount; i++) {
                    SpawnPlayers.PlayerCountDowns[i].gameObject.SetActive(true);
                }

                StartCoroutine(CountDownTick());
            }

            CountingDown();
        }
    }


    private void CountingDown() {
        countDownTime -= Time.deltaTime * timeLapse;

        for (int i = 0; i < GameSettings.PlayerCount; i++) {
            SpawnPlayers.PlayerCountDowns[i].text = countDownTime.ToString("F0");
        }

        if (countDownTime <= 0.5f) {
            AudioManager.instance.Play("Start Level");
            GameSettings.NavigationMode = 2;
            isTicking = false;

            for (int i = 0; i < GameSettings.PlayerCount; i++) {
                SpawnPlayers.PlayerCountDowns[i].gameObject.SetActive(false);
            }
        }
    }


    public static void EndLevel() {
        GameSettings.NavigationMode = 3;

        for (int i = 0; i < GameSettings.PlayerCount; i++) {
            SpawnPlayers.AllPlayersArr[i].GetComponent<PlayerController>().DisplayResults();
        }
    }


    private IEnumerator CountDownTick() {
        float modifiedTime = 1 / timeLapse;

        while (isTicking) {
            AudioManager.instance.Play("Count Down");
            yield return new WaitForSeconds(modifiedTime);
        }
    }


    public static void CleanTimeManager() {
        BailedPlayers = 0;
    }

}
