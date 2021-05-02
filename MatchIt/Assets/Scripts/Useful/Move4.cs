using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move4 : MonoBehaviour
{
    private float RaycastRange = 2f; //1.23f; 

    private bool isMoving;
    public Vector3 origPos, targetPos;
    private float timeToMove = 0.1f;

    public string up;
    public string down;
    public string left;
    public string right;
    //int layer_mask = LayerMask.GetMask("Color");

    public string Object_Color;

    public GameObject SpawnScript;

    public Settingsmanager sm; 

    /*private Vector2 startTouchPosition;
    private Vector2 currentPosition;
    private Vector2 endTouchPosition;
    private bool stopTouch;
    public float swipeRange;
    public float tapRange;*/

    Vector2 firstPressPos;
    Vector2 secondPressPos;
    Vector2 currentSwipe;

    void Start()
    {
        Object_Color = gameObject.tag;
        SpawnScript = GameObject.FindGameObjectWithTag("SpawnScript");
    }



    void Update()
    {
        Swipe(); 
        /*RaycastHit2D hit = Physics2D.Raycast(transform.position, Vector3.up, 1.23f);
        Debug.DrawRay(transform.position, Vector3.up * 1.23f, Color.red);*/
        
        
        //UP
        if (Input.GetKeyDown(KeyCode.W) && !isMoving)
        {
            //Check_UP(); 
            Matchable_UP(); 
            /*if (hit_up.transform.tag == "Cell" || hit_up.transform.tag == "White" || gameObject.tag == hit_up.transform.tag)
            {
                StartCoroutine(MovePlayer(new Vector3(0, 1.25f, 0)));
            }else if (gameObject.tag == "Red" || gameObject.tag == "Blue" || gameObject.tag == "Yellow")
            {                
                if(hit_up.transform.tag == "Red" || hit_up.transform.tag == "Blue" || hit_up.transform.tag == "Yellow")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, 1.25f, 0)));
                }
            }*/
            
            
        }

        //LEFT
        if (Input.GetKeyDown(KeyCode.A) && !isMoving)
        {
            //Check_LEFT(); 
            Matchable_LEFT(); 
            /*if (hit_left.transform.tag == "Cell" || hit_left.transform.tag == "White" || gameObject.tag == hit_left.transform.tag)
            {
                StartCoroutine(MovePlayer(new Vector3(-1.25f, 0, 0)));
            }else if (gameObject.tag == "Red" || gameObject.tag == "Blue" || gameObject.tag == "Yellow")
            {

                if (hit_left.transform.tag == "Red" || hit_left.transform.tag == "Blue" || hit_left.transform.tag == "Yellow")
                {
                    StartCoroutine(MovePlayer(new Vector3(-1.25f, 0, 0)));
                }
            }*/

        }

        //DOWN
        if (Input.GetKeyDown(KeyCode.S) && !isMoving)
        {
            //Check_DOWN(); 
            Matchable_DOWN(); 
            /*if (hit_down.transform.tag == "Cell" || hit_down.transform.tag == "White" || gameObject.tag == hit_down.transform.tag)
            {
                StartCoroutine(MovePlayer(new Vector3(0, -1.25f, 0)));
                Debug.Log("ye");
            }


            else if (gameObject.tag == "Red" || gameObject.tag == "Blue" || gameObject.tag == "Yellow")
            {

                if (hit_down.transform.tag == "Red" || hit_down.transform.tag == "Blue" || hit_down.transform.tag == "Yellow")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, -1.25f, 0)));
                }
            }*/

        }

        //RIGHT
        if (Input.GetKeyDown(KeyCode.D) && !isMoving)
        {
            //Check_RIGHT(); 
            Matchable_RIGHT(); 
            /*if (gameObject.tag == hit_right.transform.tag || hit_right.transform.tag == "Cell" || hit_right.transform.tag == "White")
            {
                StartCoroutine(MovePlayer(new Vector3(1.25f, 0, 0)));
            }

            else if (gameObject.tag == "Red" || gameObject.tag == "Blue" || gameObject.tag == "Yellow")
            {

                if (hit_right.transform.tag == "Red" || hit_right.transform.tag == "Blue" || hit_right.transform.tag == "Yellow")
                {
                    StartCoroutine(MovePlayer(new Vector3(1.25f, 0, 0)));
                }
            }*/

        }
    }

    public void Swipe()
    {
        if (Input.touches.Length > 0)
        {
            Touch t = Input.GetTouch(0);
            if (t.phase == TouchPhase.Began)
            {
                //save began touch 2d point
                firstPressPos = new Vector2(t.position.x, t.position.y);
            }
            if (t.phase == TouchPhase.Ended)
            {
                //save ended touch 2d point
                secondPressPos = new Vector2(t.position.x, t.position.y);

                //create vector from the two points
                currentSwipe = new Vector3(secondPressPos.x - firstPressPos.x, secondPressPos.y - firstPressPos.y);

                //normalize the 2d vector
                currentSwipe.Normalize();

                //swipe upwards
                if (currentSwipe.y > 0 && currentSwipe.x > -0.5f && currentSwipe.x < 0.5f)
                {
                    Debug.Log("up swipe");
                    Matchable_UP();
                    Time.timeScale = 1.0f; 
                }
                //swipe down
                if (currentSwipe.y < 0 && currentSwipe.x > -0.5f && currentSwipe.x < 0.5f)
                {
                    Debug.Log("down swipe");
                    Matchable_DOWN();
                    Time.timeScale = 1.0f; 
                }
                //swipe left
                if (currentSwipe.x < 0 && currentSwipe.y > -0.5f && currentSwipe.y < 0.5f)
                {
                    Debug.Log("left swipe");
                    Matchable_LEFT();
                    Time.timeScale = 1.0f; 
                }
                //swipe right
                if (currentSwipe.x > 0 && currentSwipe.y > -0.5f && currentSwipe.y < 0.5f)
                {
                    Debug.Log("right swipe");
                    Matchable_RIGHT();
                    Time.timeScale = 1.0f; 
                }
            }
        }
    }



    private IEnumerator MovePlayer(Vector3 direction)
    {
        isMoving = true;

        float elapsedTime = 0;

        origPos = gameObject.transform.localPosition;
        targetPos = origPos + direction;
        //Debug.Log(targetPos); 

        while(elapsedTime < timeToMove)
        {
            transform.localPosition = Vector3.Lerp(origPos, targetPos, (elapsedTime / timeToMove));
            elapsedTime += Time.deltaTime;
            yield return null; 
        }

        transform.localPosition = targetPos; 


        isMoving = false; 
    }

    /*public void SnapToGrid()
    {
        var position = new Vector3(
            Mathf.RoundToInt(this.transform.position.x),
            Mathf.RoundToInt(this.transform.position.y),
            Mathf.RoundToInt(this.transform.position.z)
            );
        this.transform.position = position; 
    }*/

    /*public void Swipe()
    {
        

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
                if (Distance.x < -swipeRange)
                {
                    Debug.Log("Left");
                    stopTouch = true;

                }
                else if (Distance.x > swipeRange)
                {
                    Debug.Log("Right");
                    stopTouch = true;
                }
                else if (Distance.y > swipeRange)
                {
                    Debug.Log("Up");
                    stopTouch = true;
                }
                else if (Distance.y < -swipeRange)
                {
                    Debug.Log("Down");
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

    }*/
    /*public void Check_UP()
    {
        RaycastHit2D hit_up = Physics2D.Raycast(transform.position, Vector3.up, 1.23f);
        Debug.DrawRay(transform.position, Vector3.up * 1.23f, Color.green);
        //up = hit_up.transform.tag.ToString();

        if (hit_up.transform.tag != "Border")
        {
            if (hit_up.transform.tag == "Cell")
            {
                Debug.Log("yes");
                //Debug.Log(hit_up); 
                if (hit_up.transform.tag != "Purple" || hit_up.transform.tag != "Orange" || hit_up.transform.tag != "Green" || hit_up.transform.tag != "Red" || hit_up.transform.tag != "Blue" || hit_up.transform.tag != "Yellow" || hit_up.transform.tag != "White")
                {
                    //Debug.Log("worked");
                    StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
                }
            }

        }
    }

    public void Check_DOWN()
    {
        RaycastHit2D hit_down = Physics2D.Raycast(transform.position, Vector3.down, 1.23f);
        Debug.DrawRay(transform.position, Vector3.down * 1.23f, Color.blue);
        //down = hit_down.transform.tag.ToString();

        if (hit_down.transform.tag != "Border")
        {
            if (hit_down.transform.tag == "Cell")
            {
                Debug.Log("yes");
                //Debug.Log(hit_down);
                if (hit_down.transform.tag != "Purple" || hit_down.transform.tag != "Orange" || hit_down.transform.tag != "Green" || hit_down.transform.tag != "Red" || hit_down.transform.tag != "Blue" || hit_down.transform.tag != "Yellow" || hit_down.transform.tag != "White")
                {
                    //Debug.Log("worked");
                    StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
                }
            }

        }
    }

    public void Check_LEFT()
    {
        RaycastHit2D hit_left = Physics2D.Raycast(transform.position, Vector3.left, 1.23f);
        Debug.DrawRay(transform.position, Vector3.left * 1.23f, Color.red);
        //left = hit_left.transform.tag.ToString();

        if (hit_left.transform.tag != "Border")
        {
            if (hit_left.transform.tag == "Cell")
            {
                Debug.Log("yes");
                //Debug.Log(hit_left);
                if (hit_left.transform.tag != "Purple" || hit_left.transform.tag != "Orange" || hit_left.transform.tag != "Green" || hit_left.transform.tag != "Red" || hit_left.transform.tag != "Blue" || hit_left.transform.tag != "Yellow" || hit_left.transform.tag != "White")
                {
                    //Debug.Log("worked");
                    StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
                }
            }

        }
    }

    public void Check_RIGHT()
    {
        RaycastHit2D hit_right = Physics2D.Raycast(transform.position, Vector3.right, 1.23f);
        Debug.DrawRay(transform.position, Vector3.right * 1.23f, Color.white);
        //right = hit_right.transform.tag.ToString();


        if (hit_right.transform.tag != "Border")
        {
            //Debug.Log(hit_right);
            if(hit_right.transform.tag == "Cell")
            {
                Debug.Log("yes"); 
                if (hit_right.transform.tag != "Purple" || hit_right.transform.tag != "Orange" || hit_right.transform.tag != "Green" || hit_right.transform.tag != "Red" || hit_right.transform.tag != "Blue" || hit_right.transform.tag != "Yellow" || hit_right.transform.tag != "White")
                {
                    //Debug.Log("worked");
                    StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
                }
            }

        }
    }*/ 

    public void Matchable_UP()
    {
        RaycastHit2D hit_up = Physics2D.Raycast(transform.position, Vector3.up, RaycastRange);
        Debug.DrawRay(transform.position, Vector3.up * RaycastRange, Color.white);

        string tag = hit_up.transform.tag;

        /*if(tag != "Border")
        {
            if(tag != "Purple" && tag != "Orange" && tag != "Green")
            {
                if(Object_Color == "Yellow")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, 175, 0))); 
                }else if(Object_Color == "Blue")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
                }
                else if(Object_Color == "Red")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
                }
                else if (tag == "Cell")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
                }
            }
        }*/

        /*if(tag != "Purple" && tag != "Orange" && tag != "Green")
        {
            if (tag == Object_Color || tag == "Cell")
            {
                StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
            }
            else if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red" || Object_Color == "White")
            {
                if (tag == "Yellow" || tag == "Blue" || tag == "Red" || tag == "White")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
                }
            }
        }*/
        if (tag != "Border")
        {

            if (tag != Object_Color)
            {
                if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red")
                {
                    if (tag != "Purple" && tag != "Orange" && tag != "Green")
                    {
                        StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
                    }
                }
                else if (Object_Color == "Purple" || Object_Color == "Orange" || Object_Color == "Green")
                {
                    if(tag == "Cell" || tag == "White")
                    {
                        StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
                    }
                }
            }
            else if (tag == Object_Color)
            {
                StartCoroutine(MovePlayer(new Vector3(0, 175, 0)));
            }
        }
    }
    
    public void Matchable_DOWN()
    {
        RaycastHit2D hit_down = Physics2D.Raycast(transform.position, Vector3.down, RaycastRange);
        Debug.DrawRay(transform.position, Vector3.down * RaycastRange, Color.white);

        string tag = hit_down.transform.tag;

        /*if (tag != "Border")
        {
            if (tag != "Purple" && tag != "Orange" && tag != "Green")
            {
                if (Object_Color == "Yellow")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
                }
                else if (Object_Color == "Blue")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
                }
                else if (Object_Color == "Red")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
                }
                else if (tag == "Cell")
                {
                    StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
                }
            }
        }*/
        /*if (tag != "Border")
        {
            if (tag != Object_Color)
            {
                if (tag != "Purple" && tag != "Orange" && tag != "Green")
                {
                    if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red" || Object_Color == "White")
                    {
                        StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
                    }
                }
            }
            if (tag == Object_Color || tag == "Cell")
            {
                StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
            }
        }*/
        if (tag != "Border")
        {

            if (tag != Object_Color)
            {
                if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red")
                {
                    if (tag != "Purple" && tag != "Orange" && tag != "Green")
                    {
                        StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
                    }
                }
                else if (Object_Color == "Purple" || Object_Color == "Orange" || Object_Color == "Green")
                {
                    if (tag == "Cell" || tag == "White")
                    {
                        StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
                    }
                }
            }
            else if (tag == Object_Color)
            {
                StartCoroutine(MovePlayer(new Vector3(0, -175, 0)));
            }
        }
    }

    public void Matchable_RIGHT()
    {
        RaycastHit2D hit_right = Physics2D.Raycast(transform.position, Vector3.right, RaycastRange);
        Debug.DrawRay(transform.position, Vector3.right * RaycastRange, Color.white);

        string tag = hit_right.transform.tag;

        /*if (tag != "Border")
        {
            if (tag != "Purple" && tag != "Orange" && tag != "Green")
            {
                if (Object_Color == "Yellow")
                {
                    StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
                }
                else if (Object_Color == "Blue")
                {
                    StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
                }
                else if (Object_Color == "Red")
                {
                    StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
                }
                else if (tag == "Cell")
                {
                    StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
                }
            }
        }*/
        /*if (tag != "Border")
        {
            if (tag != Object_Color)
            {
                if (tag != "Purple" && tag != "Orange" && tag != "Green")
                {
                    if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red" || Object_Color == "White")
                    {
                        StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
                    }
                }
            }
            if (tag == Object_Color || tag == "Cell")
            {
                StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
            }
        }*/
        if (tag != "Border")
        {

            if (tag != Object_Color)
            {
                if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red")
                {
                    if (tag != "Purple" && tag != "Orange" && tag != "Green")
                    {
                        StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
                    }
                }
                else if (Object_Color == "Purple" || Object_Color == "Orange" || Object_Color == "Green")
                {
                    if (tag == "Cell" || tag == "White")
                    {
                        StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
                    }
                }
            }
            else if (tag == Object_Color)
            {
                StartCoroutine(MovePlayer(new Vector3(175, 0, 0)));
            }
        }
    }

    public void Matchable_LEFT()
    {
        RaycastHit2D hit_left = Physics2D.Raycast(transform.position, Vector3.left, RaycastRange);
        Debug.DrawRay(transform.position, Vector3.left * RaycastRange, Color.white);

        string tag = hit_left.transform.tag;

        /*if (tag != "Border")
        {
            if (tag != Object_Color)
            {
                if (tag != "Purple" && tag != "Orange" && tag != "Green")
                {
                    if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red" || Object_Color == "White")
                    {
                        StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
                    }
                }
            }
            if (tag == Object_Color || tag == "Cell")
            {
                StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
            }
        } */
        if (tag != "Border")
        {

            if (tag != Object_Color)
            {
                if (Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red")
                {
                    if (tag != "Purple" && tag != "Orange" && tag != "Green")
                    {
                        StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
                    }
                }
                else if (Object_Color == "Purple" || Object_Color == "Orange" || Object_Color == "Green")
                {
                    if (tag == "Cell" || tag == "White")
                    {
                        StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
                    }
                }
            }
            else if (tag == Object_Color)
            {
                StartCoroutine(MovePlayer(new Vector3(-175, 0, 0)));
            }
        }

    }

    /*public void OnCollisionEnter2D(Collision2D collision)
    {
        //Get Position


        if(Object_Color != collision.gameObject.tag)
        {
            if (Object_Color == "Yellow")
            {
                if(collision.gameObject.tag == "Red")
                {

                }
                else if(collision.gameObject.tag == "Blue")
                {

                }
            }
            else if (Object_Color == "Red")
            {
                if (collision.gameObject.tag == "Yellow")
                {

                }
                else if (collision.gameObject.tag == "Blue")
                {

                }
            }
            else if (Object_Color == "Blue")
            {
                if (collision.gameObject.tag == "Yellow")
                {

                }
                else if (collision.gameObject.tag == "Red")
                {
                    //Spawn purple on position
                }
            }
        }else if(Object_Color == collision.gameObject.tag)
        {
            
        }



        
    }*/

    //Defineier eng range collision.transform.localPosition an dann huel als position dat opgeronnten


    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (Object_Color != collision.gameObject.tag)
        {
            Vector3 currentPos = new Vector3(0, 0, 0); 

            /*if(collision.transform.localPosition.x > 160)
            {
                currentPos.x = 175; 
            }
            if (collision.transform.localPosition.x < 160)
            {
                currentPos.x = -175;
            }
            if (collision.transform.localPosition.y > 160)
            {
                currentPos.y = 175;
            }
            if (collision.transform.localPosition.y < 160)
            {
                currentPos.y = -175;
            }*/ 

            if(collision.transform.localPosition.x < 50 && collision.transform.localPosition.x > -50)
            {
                currentPos.x = 0; 
            }
            else if (collision.transform.localPosition.x > 160)
            {
                currentPos.x = 175;
            }
            else if (collision.transform.localPosition.x < 160)
            {
                currentPos.x = -175;
            }

            if (collision.transform.localPosition.y < 50 && collision.transform.localPosition.y > -50)
            {
                currentPos.y = 0;
            }
            else if (collision.transform.localPosition.y > 160)
            {
                currentPos.y = 175;
            }
            else if (collision.transform.localPosition.y < 160)
            {
                currentPos.y = -175;
            }

            

            if (Object_Color == "Yellow")
            {
                if (collision.gameObject.tag == "Red")
                {
                    //SpawnScript.SendMessage("Position", collision.transform.localPosition);
                    //SpawnScript.SendMessage("Color", "Orange");
                    sm.OnPlop();
                    SpawnScript.SendMessage("CoPo", "Orange" + currentPos);
                    Destroy(gameObject);
                }
                else if (collision.gameObject.tag == "Blue")
                {
                    //SpawnScript.SendMessage("Position", collision.transform.localPosition);
                    //SpawnScript.SendMessage("Color", "Green"); 
                    sm.OnPlop();
                    SpawnScript.SendMessage("CoPo", "Green" + currentPos);
                    Destroy(gameObject); 
                }
                else if (collision.gameObject.tag == "White")
                {
                    //Destroy(gameObject); 
                    //SpawnScript.SendMessage("CoPo", "Yellow" + currentPos);
                    sm.OnPlop();
                    Destroy(collision.gameObject);
                }
            }
            else if (Object_Color == "Red")
            {
                if (collision.gameObject.tag == "Yellow")
                {
                    //SpawnScript.SendMessage("Position", collision.transform.localPosition);
                    //SpawnScript.SendMessage("Color", "Orange"); 
                    sm.OnPlop();
                    SpawnScript.SendMessage("CoPo", "Orange" + currentPos);
                    Destroy(gameObject);
                }
                else if (collision.gameObject.tag == "Blue")
                {
                    //SpawnScript.SendMessage("Position", collision.transform.localPosition);
                    //SpawnScript.SendMessage("Color", "Purple"); 
                    sm.OnPlop();
                    SpawnScript.SendMessage("CoPo", "Purple" + currentPos);
                    Destroy(gameObject);
                }
                else if (collision.gameObject.tag == "White")
                {
                    //Debug.Log(currentPos); 
                    //Debug.Log(collision.transform.position); 
                    //Destroy(gameObject); 
                    //SpawnScript.SendMessage("CoPo", "Red" + currentPos);
                    sm.OnPlop();
                    Destroy(collision.gameObject);
                }
            }
            else if (Object_Color == "Blue")
            {
                if (collision.gameObject.tag == "Yellow")
                {
                    //SpawnScript.SendMessage("Position", collision.transform.localPosition);
                    //SpawnScript.SendMessage("Color", "Green"); 
                    sm.OnPlop();
                    SpawnScript.SendMessage("CoPo", "Green" + currentPos);
                    Destroy(gameObject);
                }
                else if (collision.gameObject.tag == "Red")
                {
                    //Spawn purple on position 
                    //SpawnScript.SendMessage("Position", collision.transform.localPosition);
                    //SpawnScript.SendMessage("Color", "Purple"); 
                    sm.OnPlop();
                    SpawnScript.SendMessage("CoPo", "Purple" + currentPos);
                    Destroy(gameObject);
                }
                else if (collision.gameObject.tag == "White")
                {
                    //Destroy(gameObject);
                    //SpawnScript.SendMessage("CoPo", "Blue" + currentPos); 
                    sm.OnPlop();
                    Destroy(collision.gameObject);
                }
            }else if(Object_Color == "White")
            {
                if (collision.gameObject.tag == "Yellow" || collision.gameObject.tag == "Red" || collision.gameObject.tag == "Blue" || collision.gameObject.tag == "Orange" || collision.gameObject.tag == "Green" || collision.gameObject.tag == "Purple")
                {
                    //SpawnScript.SendMessage("CoPo", collision.gameObject.tag + currentPos); 
                    sm.OnPlop();
                    Destroy(gameObject);
                }
                //SpawnScript.SendMessage("CoPo", collision.gameObject.tag + currentPos); 
                //Destroy(gameObject); 
            }/*else if(Object_Color == "Purple" || Object_Color == "Orange" || Object_Color == "Green" || Object_Color == "Yellow" || Object_Color == "Blue" || Object_Color == "Red")
            {
                if(collision.gameObject.tag == "White")
                {
                    SpawnScript.SendMessage("CoPo", collision.gameObject.tag + currentPos);
                    Destroy(gameObject);
                }
            }*/
        }
        else if (Object_Color == collision.gameObject.tag)
        {
            //sm.OnPlop(); 
            Destroy(gameObject);
            sm.OnPlop();
        }
    }

}
