using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class Color_Script : MonoBehaviour
{
    private Image square;
    public GameObject MatchSystem;


    // Start is called before the first frame update
    void Start()
    {
        square = GetComponent<Image>();
        MatchSystem = GameObject.FindGameObjectWithTag("MatchSystem"); 

       
        if (gameObject.tag == "White")
        {
            square.color = new Color(1, 1, 1, 1);
            //square.color = Color.white; 
        }

        if (gameObject.tag == "Blue")
        {
            square.color = new Color(0.4764151f, 1, 0.9606738f, 1); 
            //square.color = new Color(0, 0, 1, 1); 
            //square.color = Color.cyan;
        }

        if (gameObject.tag == "Red")
        {
            square.color = new Color(1, 0.08962262f, 0.08962262f, 1); 
            //square.color = new Color(1, 0, 0, 1); 
            //square.color = Color.magenta; //FF0041 FF0022
        }

        if (gameObject.tag == "Yellow")
        {
            square.color = new Color(1, 0.9354294f, 0.2311321f, 1); 
            //square.color = new Color(1, 1, 0, 1);
            //square.color = Color.yellow;
        }

        if (gameObject.tag == "Green")
        {
            square.color = new Color(0.3180013f, 1, 0.25f, 1); 
            //square.color = new Color(0.1317195f, 0.754717f, 0.1317195f, 1); 
            //square.color = Color.Lerp(Color.cyan, Color.yellow, 0.5f);
        }

        if(gameObject.tag == "Purple")
        {
            square.color = new Color(1, 0.1933962f, 0.9347395f, 1); 
            //square.color = new Color(1, 0, 1, 1); 
            //square.color = Color.Lerp(Color.cyan, Color.magenta, 0.5f);
            //square.color = Color.Lerp(Color.blue, Color.red, 0.5f);
        }

        if (gameObject.tag == "Orange")
        {
            //square.color = new Color(1, 0.6543527f, 0.1556604f, 1);
            square.color = new Color(0.8901961f, 0.5372549f, 0.02745098f, 1);
            //square.color = new Color(1, 0.5f, 0, 1);
            //square.color = Color.Lerp(Color.yellow, Color.red, 0.5f); 
        }
    }


    public void OnTriggerEnter2D(Collider2D collision)
    {

        /*  if(collision.gameObject.tag == "White")
          {
              square.color = Color.Lerp(square.color, Color.white, 0.5f); 
          }
          else if (collision.gameObject.tag == "Blue")
          {
              square.color = Color.Lerp(square.color, Color.cyan, 0.5f);
          }
          else if (collision.gameObject.tag == "Red")
          {
              square.color = Color.Lerp(square.color, Color.magenta, 0.5f);
          }
          else if (collision.gameObject.tag == "Yellow")
          {
              square.color = Color.Lerp(square.color, Color.yellow, 0.5f);
          }
          else if (collision.gameObject.tag == "Purple")
          {
              square.color = Color.Lerp(square.color, Color.Lerp(Color.cyan, Color.magenta, 0.5f), 0.5f);
          }
          else if (collision.gameObject.tag == "Orange")
          {
              square.color = Color.Lerp(square.color, Color.Lerp(Color.yellow, Color.magenta, 0.5f), 0.5f);
          }
          else if (collision.gameObject.tag == "Green")
          {
              square.color = Color.Lerp(square.color, Color.Lerp(Color.cyan, Color.yellow, 0.5f), 0.5f);
          }

          //Destroy(collision.gameObject); */
        if(collision.gameObject.tag != "Cell")
        {
            //Destroy(collision.gameObject); // <-- Just debugging 
        }
        

        //MatchSystem.SendMessage("Position", collision.transform.localPosition); 
        //MatchSystem.SendMessage("Color",collision.gameObject.tag); 
        //Debug.Log("collision with " + collision.gameObject.tag); 
    }





}
