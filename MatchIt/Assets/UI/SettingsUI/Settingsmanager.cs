using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement; 

public class Settingsmanager : MonoBehaviour
{
    private AudioLowPassFilter lowPass;
    private AudioSource audioSource;
    private AudioSource e_audioSource;

    public bool audio_Mute = false;

    public GameObject Mute;
    public GameObject Unmute;


    //Sounds
    public AudioClip click;
    public AudioClip plop;


    // Start is called before the first frame update
    void Start()
    {
        lowPass = GetComponent<AudioLowPassFilter>();
        audioSource = GetComponent<AudioSource>();

        GameObject obj = GameObject.Find("SoundEffectmanager");

        e_audioSource = obj.GetComponent<AudioSource>();

        if (PlayerPrefs.GetInt("Mute") == 1)
        {
            audio_Mute = true;
        }
        else
        {
            audio_Mute = false; 
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(audio_Mute == true)
        {
            audioSource.Pause();
            Unmute.SetActive(true); 
        }
        else
        {
            audioSource.UnPause();
            Unmute.SetActive(false);
        }
    }

    public void OnOpenSettings()
    {
        Time.timeScale = 0.5f;
        lowPass.cutoffFrequency = 500;
        e_audioSource.PlayOneShot(click, 1F);
    }

    public void OnExitSettings()
    {
        Time.timeScale = 1.0f;
        lowPass.cutoffFrequency = 5007.7f;
        e_audioSource.PlayOneShot(click, 1F);
    }

    public void OnMute()
    {
        audio_Mute = true;
        PlayerPrefs.SetInt("Mute", 1);
        e_audioSource.PlayOneShot(click, 1F);
    }

    public void OnUnmute()
    {
        audio_Mute = false;
        PlayerPrefs.SetInt("Mute", 0);
        e_audioSource.PlayOneShot(click, 1F);
    }

    public void ReloadLevel()
    {
        SceneManager.LoadScene("SampleScene");
    }

    public void OnOpenInfo()
    {
        Time.timeScale = 0.5f;
        lowPass.cutoffFrequency = 500; 
        e_audioSource.PlayOneShot(click, 1F);
    }

    public void OnCloseInfo()
    {
        Time.timeScale = 1.0f;
        lowPass.cutoffFrequency = 5007.7f;
        e_audioSource.PlayOneShot(click, 1F);
    }

    public void Instagram()
    {
        e_audioSource.PlayOneShot(click, 1F);
        Application.OpenURL("https://www.instagram.com/cursed.dog/"); 
    }

    public void Discord()
    {
        e_audioSource.PlayOneShot(click, 1F); 
        Application.OpenURL("https://discord.gg/ESZR65CPtE");
    }

    public void CursedDog()
    {
        e_audioSource.PlayOneShot(click, 1F);
        Application.OpenURL("http://cursed-dog.com");
    }

    public void OnPlop()
    {
        e_audioSource.PlayOneShot(plop, 1F);
    }
}
