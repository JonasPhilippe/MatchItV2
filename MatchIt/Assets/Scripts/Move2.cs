using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems; 

public class Move2 : MonoBehaviour
{
    private Vector2 startTouchPosition;
    private Vector2 currentPosition;
    private Vector2 endTouchPosition;
    private bool stopTouch;

    public float swipeRange;
    public float tapRange;

    public static Move2 mInstance;
    public Transform currentPlatform;


    private Rigidbody2D rb; 


    void Start()
    {
        mInstance = this;
    }

    // Update is called once per frame
    void Update()
    {
        Swipe(); 
    }

    public void Swipe()
    {
        currentPlatform = EventSystem.current.currentSelectedGameObject.transform; 

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            startTouchPosition = Input.GetTouch(0).position; 
        }

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
        {
            currentPosition = Input.GetTouch(0).position;
            Vector2 Distance = currentPosition - startTouchPosition;

            if (!stopTouch)
            {
                if(Distance.x < -swipeRange)
                {
                    Debug.Log("Left");
                    //currentPlatform.transform.Translate(-1.25f, 0, 0); 
                    //Vector3 pos = currentPlatform.position;
                    //currentPlatform.position = Vector3.MoveTowards(transform.position, pos.x - 1.25f, 0.1f * Time.deltaTime); 
                    //currentPlatform.position += new Vector3(-1.25f, 0, 0); 
                    //currentPlatform.position += new Vector3(transform.position.x - 1.25f, transform.position.y, transform.position.z); 


                    //Vector3 tra = new Vector3(transform.position.x - 1.25f, transform.position.y, transform.position.z);
                    //currentPlatform.position += Vector3.Lerp(currentPlatform.position, tra, 1f * Time.deltaTime); 

                    currentPlatform.transform.position = Vector3.Lerp(currentPlatform.transform.position, new Vector3(currentPlatform.transform.position.x - 175f, currentPlatform.transform.position.y, currentPlatform.transform.position.z), 1f * Time.deltaTime); 
                    stopTouch = true;
                    rb = currentPlatform.GetComponent<Rigidbody2D>(); 
                }
                else if (Distance.x > swipeRange)
                {
                    Debug.Log("Right");
                    currentPlatform.transform.Translate(1.25f, 0, 0);
                    stopTouch = true; 
                }
                else if (Distance.y > swipeRange)
                {
                    Debug.Log("Up");
                    currentPlatform.transform.Translate(0, 1.25f, 0);
                    stopTouch = true;
                }
                else if (Distance.y < -swipeRange)
                {
                    Debug.Log("Down");
                    currentPlatform.transform.Translate(0, -1.25f, 0); 
                    //rb.velocity = new Vector2(0, -1.25f); 
                    stopTouch = true;
                }
            }
        }

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            stopTouch = false;

            endTouchPosition = Input.GetTouch(0).position;

            Vector2 Distance = endTouchPosition - startTouchPosition; 

            if (Mathf.Abs(Distance.x) < tapRange && Mathf.Abs(Distance.y) < tapRange)
            {
                Debug.Log("Tap"); 
            } 
        }

    }


}
