using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameSettings : MonoBehaviour {

    public static int PlayerCount = 2;
    public static int ManualPlayerCount = 2;
    public static int MaxPlayer = 5;
    public static int ConnectedGamepads = 0;

    // 0 = initial delay; 1 = countdown; 2 = play; 3 = results
    public static int NavigationMode = -1;


    // public static void CleanGameSettings() {
    //     PlayerCount = 2;
    //     ManualPlayerCount = 2;
    // }

}
