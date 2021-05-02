using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Move5 : MonoBehaviour
{
/*
    private Vector2 startTouchPosition;
    private Vector2 currentPosition;
    private Vector2 endTouchPosition;
    private bool stopTouch;

    public float swipeRange;
    public float tapRange;

    public static Move5 mInstance;
    public Transform currentPlatform;


    private Rigidbody2D rb;


    private bool isMoving;
    public Vector3 origPos, targetPos;
    private float timeToMove = 0.1f;

    private RaycastHit2D[] hitObjects = new RaycastHit2D[1];
    Vector2 startPos, endPos, direction;
    public GameObject ObjectToMove; 


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
        //currentPlatform = EventSystem.current.currentSelectedGameObject.transform;

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            Vector3 origin = Camera.main.ScreenToWorldPoint(new Vector3(transform.position.x, transform.position.y, 0f));
            int hits = Physics2D.RaycastNonAlloc(new Vector2(origin.x, origin.y), Vector2.up, hitObjects);

            if (hits == 0)
                return;

            ObjectToMove = hitObjects[0].transform.gameObject;

            startTouchPosition = Input.GetTouch(0).position;
        }

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
        {
        
            Vector2 Distance = currentPosition - startTouchPosition;

            if (!stopTouch)
            {
                if (Distance.x < -swipeRange)
                {
                    Debug.Log("Left");
                    Check_LEFT(); 
                    stopTouch = true;

                }
                else if (Distance.x > swipeRange)
                {
                    Debug.Log("Right");
                    Check_RIGHT(); 
                    stopTouch = true;
                }
                else if (Distance.y > swipeRange)
                {
                    Debug.Log("Up");
                    Check_UP(); 
                    stopTouch = true;
                }
                else if (Distance.y < -swipeRange)
                {
                    Debug.Log("Down");
                    Check_DOWN(); 
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

    private IEnumerator MovePlayer(Vector3 direction)
    {
        isMoving = true;

        float elapsedTime = 0;

        origPos = gameObject.transform.localPosition;
        targetPos = origPos + direction;
        Debug.Log(targetPos);

        while (elapsedTime < timeToMove)
        {
            transform.localPosition = Vector3.Lerp(origPos, targetPos, (elapsedTime / timeToMove));
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        transform.localPosition = targetPos;


        isMoving = false;
    }


    public void Check_UP()
    {
        RaycastHit2D hit_up = Physics2D.Raycast(transform.position, Vector3.up, 1.23f);
        Debug.DrawRay(transform.position, Vector3.up * 1.23f, Color.green);


        if (hit_up.transform.tag != "Border")
        {
            StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
        }
    }

    public void Check_DOWN()
    {
        RaycastHit2D hit_down = Physics2D.Raycast(transform.position, Vector3.down, 1.23f);
        Debug.DrawRay(transform.position, Vector3.down * 1.23f, Color.blue);


        if (hit_down.transform.tag != "Border")
        {
            StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
        }
    }

    public void Check_LEFT()
    {
        RaycastHit2D hit_left = Physics2D.Raycast(transform.position, Vector3.left, 1.23f);
        Debug.DrawRay(transform.position, Vector3.left * 1.23f, Color.red);


        if (hit_left.transform.tag != "Border")
        {
            StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
        }
    }

    public void Check_RIGHT()
    {
        RaycastHit2D hit_right = Physics2D.Raycast(transform.position, Vector3.right, 1.23f);
        Debug.DrawRay(transform.position, Vector3.right * 1.23f, Color.white);


        if (hit_right.transform.tag != "Border")
        {
            StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
        }
    }*/ 
}
