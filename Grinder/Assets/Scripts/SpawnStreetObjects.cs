using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnStreetObjects : MonoBehaviour {
    
    public GameObject RailPostContainer;
    public GameObject StreetTapeContainer;
    public GameObject BushesContainer;

    public GameObject RailPostGO;
    public GameObject StreetTapeGO;
    public GameObject BushesGO;

    private PlayerController playerControllerScript;

    private float spawnDelayRailPost = 1.0f;
    private float spawnDelayStreetTape = 0.5f;


    private void Start() {
        playerControllerScript = GetComponent<PlayerController>();

        SpawnNewPost();
        SpawnNewStreetTape();
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    private IEnumerator SpawnDelayRailPost() {
        yield return new WaitForSeconds(spawnDelayRailPost);

        if (!playerControllerScript.didBail) {
            SpawnNewPost();
        }
    }


    private void SpawnNewPost() {
        GameObject newPost = Instantiate(RailPostGO);
        newPost.transform.parent = RailPostContainer.transform;

        newPost.transform.localPosition = new Vector3(
            newPost.transform.position.x,
            newPost.transform.position.y,
            newPost.transform.position.z
        );

        newPost.GetComponent<StreetObjectMover>().PlayerControllerScript = playerControllerScript;
        newPost.transform.GetChild(0).GetComponent<StreetObjectMover>().PlayerControllerScript = playerControllerScript;

        // GameObject newBushes = Instantiate(BushesGO);
        // newBushes.transform.parent = BushesContainer.transform;
        // newBushes.GetComponent<StreetObjectMover>().PlayerControllerScript = playerControllerScript;

        StartCoroutine(SpawnDelayRailPost());
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    private IEnumerator SpawnDelayStreetTape() {
        yield return new WaitForSeconds(spawnDelayStreetTape);

        if (!playerControllerScript.didBail) {
            SpawnNewStreetTape();
        }
    }


    private void SpawnNewStreetTape() {
        GameObject newStreetTape = Instantiate(StreetTapeGO);
        newStreetTape.transform.parent = StreetTapeContainer.transform;

        newStreetTape.transform.localPosition = new Vector3(
            newStreetTape.transform.position.x,
            newStreetTape.transform.position.y,
            newStreetTape.transform.position.z
        );

        newStreetTape.GetComponent<StreetObjectMover>().PlayerControllerScript = playerControllerScript;
        newStreetTape.transform.GetChild(0).GetComponent<StreetObjectMover>().PlayerControllerScript = playerControllerScript;

        StartCoroutine(SpawnDelayStreetTape());
    }

}
