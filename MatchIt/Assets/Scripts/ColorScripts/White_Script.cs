using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class White_Script : MonoBehaviour
{
    private Image square; 

    private void Start()
    {
        square = GetComponent<Image>();
    }

    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "White")
        {
            square.color = Color.white; 
        }else if (collision.gameObject.tag == "Blue")
        {
            square.color = Color.blue;
        }else if (collision.gameObject.tag == "Red")
        {
            square.color = Color.red;
        }else if (collision.gameObject.tag == "Yellow")
        {
            square.color = Color.yellow;
        }
        else if (collision.gameObject.tag == "Green")
        {
            square.color = Color.green;
        }

    }
}
