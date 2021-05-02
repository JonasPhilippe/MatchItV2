using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class TargetScript : MonoBehaviour
{
    private Text target_Text; 
    public string Target;
    public GameObject[] lastLeft; 


    public MenuManager MM;


    public GameObject[] Purple;
    public GameObject[] Green;
    public GameObject[] Orange;

    public GameObject[] Red;
    public GameObject[] Blue;
    public GameObject[] Yellow;



    //public GameObject[] Boxes; 

    // Start is called before the first frame update
    void Start()
    {
        target_Text = gameObject.GetComponent<Text>(); 
        Target = target_Text.text;

        lastLeft = GameObject.FindGameObjectsWithTag(Target); 
    }

    // Update is called once per frame
    void Update()
    {
        Purple = GameObject.FindGameObjectsWithTag("Purple");
        Green = GameObject.FindGameObjectsWithTag("Green");
        Orange = GameObject.FindGameObjectsWithTag("Orange");

        Red = GameObject.FindGameObjectsWithTag("Red");
        Blue = GameObject.FindGameObjectsWithTag("Blue");
        Yellow = GameObject.FindGameObjectsWithTag("Yellow");

        int nine = Purple.Length + Green.Length + Orange.Length + Red.Length + Blue.Length + Yellow.Length; 

        if(Target != "Empty")
        {
            if (GameObject.FindGameObjectsWithTag(Target).Length == 1 && nine == 1)
            {
                Destroy(GameObject.FindGameObjectWithTag(Target)); 
                MM.OnSucceed();
            }
        }
        else
        {
            if(nine == 0)
            {
                MM.OnSucceed(); 
            }
        }
        
        /*if(lastLeft[1].tag == Target)
        {
            MM.OnSucceed(); 
        }



        /*if(Boxes == null && )
        {
            Debug.Log("next lvl"); 
        }*/
        
    }
}
