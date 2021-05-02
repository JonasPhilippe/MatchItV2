using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;
using UnityEngine.SceneManagement; 

public class MenuManager : MonoBehaviour
{
    //public string Target;
    //Colors
    /*public GameObject[] Purple;
    public GameObject[] Green;
    public GameObject[] Orange;

    public GameObject[] Red;
    public GameObject[] Blue;
    public GameObject[] Yellow;*/
    public ParticleSystem ps;
    public GameObject[] Tutorials;

    public Animation logoOut;

    public int currentLevel;
    public Text levelText; 
    public GameObject[] Levels;

    public string gameId;
    public bool testMode = true;
    public int adCounter = 1;
    public GameObject SpawnScript;
    public int PlayerRank = 0; 

    // Start is called before the first frame update
    void Start()
    {
        //Application.targetFrameRate = 60; 
        Time.timeScale = 1.0f; 
        currentLevel = PlayerPrefs.GetInt("lvl");

        SpawnScript.SendMessage("current", Levels[currentLevel]); 
        Levels[currentLevel].SetActive(true);


        Advertisement.Initialize(gameId, testMode);
        adCounter = PlayerPrefs.GetInt("adCounter", adCounter);
        //GameObject TargetGO;
        //TargetGO = GameObject.FindGameObjectWithTag("Target");
        //Target = TargetGO.ToString();
        PlayerRank = PlayerPrefs.GetInt("Rank"); 

    }

    // Update is called once per frame
    void Update()
    {
        levelText.text = "Level " + currentLevel;

        /*Purple = GameObject.FindGameObjectsWithTag("Purple");
        Green = GameObject.FindGameObjectsWithTag("Green");
        Orange = GameObject.FindGameObjectsWithTag("Orange");

        Red = GameObject.FindGameObjectsWithTag("Red");
        Blue = GameObject.FindGameObjectsWithTag("Blue");
        Yellow = GameObject.FindGameObjectsWithTag("Yellow");*/
    }

    public void OnPressStart()
    {
        //logoOut.Play(); 
        if (currentLevel == 0 && PlayerRank == 0)
        {
            Tutorials[0].SetActive(true);
        }
    }

    public void OnSucceed()
    {

        if (currentLevel == Levels.Length - 1)
        {
            Reset();
            PlayerRank += 1;
            PlayerPrefs.SetInt("Rank", PlayerRank); 
            SceneManager.LoadScene("SampleScene");
        }
        else
        {
            if (adCounter >= 8)
            {
                ShowInterstitialAd();
                adCounter = 0;
            }

            adCounter += 1;
            PlayerPrefs.SetInt("adCounter", adCounter);

            ps.Play();

            currentLevel += 1;
            PlayerPrefs.SetInt("lvl", currentLevel);


            SpawnScript.SendMessage("current", Levels[currentLevel]);
            Levels[currentLevel].SetActive(true);


            foreach (GameObject x in Levels)
            {
                if (x != Levels[currentLevel])
                {
                    x.SetActive(false);
                }
            }

            if(currentLevel == 1 && PlayerRank == 0)
            {
                Tutorials[0].SetActive(false);
                Tutorials[1].SetActive(true); 
            }
            else if (currentLevel == 2 && PlayerRank == 0)
            {
                Tutorials[1].SetActive(false);
                Tutorials[2].SetActive(true);
            }
            else if (currentLevel == 3 && PlayerRank == 0)
            {
                Tutorials[2].SetActive(false);
                Tutorials[3].SetActive(true);
            }
            if (currentLevel == 4 && PlayerRank == 0)
            {
                Tutorials[3].SetActive(false);
            }

            //GameObject TargetGO;
            //TargetGO = GameObject.FindGameObjectWithTag("Target");
            //Target = TargetGO.ToString();}



        }
        }

        public void Reset()
    {
        currentLevel = 0;
        PlayerPrefs.SetInt("lvl", currentLevel);
        PlayerPrefs.SetInt("Rank", 0);
        SceneManager.LoadScene("SampleScene"); 
    }


    public void ShowInterstitialAd()
    {
        // Check if UnityAds ready before calling Show method:
        if (Advertisement.IsReady())
        {
            Advertisement.Show();
        }
        else
        {
            Debug.Log("Interstitial ad not ready at the moment! Please try again later!");
        }
    }
}
