using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class SpawnScript : MonoBehaviour
{
    public GameObject Sprite_Prefab;

    public List<string> collisionList = new List<string>();
    public int num = 1;

    public GameObject currentLvl;
    public Text currentNum;

    float x;
    float y;

    public void CoPo(string spawnPos)
    {
        //print(deathPos); 
        //spawnPositions.Add(deathPos); 
        //deathPosition = spawnPos; 
        //Debug.Log(spawnPos);


        /*if (!collisionList.Contains(spawnPos))
        {
            collisionList.Add(spawnPos);
            string[] Color = spawnPos.Split('(');
            //Debug.Log("Spawn " + Color[0] + " at " + Color[1]); 
            Spawn(Color[0], Color[1]); 
        }*/

        num += 1;
        if (num % 2 == 1)
        {
            collisionList.Add(spawnPos);
            string[] Color = spawnPos.Split('(');
            //Debug.Log("Spawn " + Color[0] + " at " + Color[1]);
            Spawn(Color[0], Color[1]);
        }
        //clear collision list onsucceed in menu manager, maybe with temporary bool
    }

    void Spawn(string color, string position)
    {
        Debug.Log(color);
        //Debug.Log(position);

        string[] sArray = position.Split(',');

        /*if(float.Parse(sArray[0]) == 0)
        {
            x = 0f;
        }
        else if(float.Parse(sArray[0]) >= 175)
        {
            x = 175f;
        }else if(float.Parse(sArray[0]) >= -175)
        {
            x = -175f;
        }

        if (float.Parse(sArray[1]) == 0)
        {
            y = 0f;
        }
        else if (float.Parse(sArray[1]) >= 175)
        {
            y = 175f;
        }
        else if (float.Parse(sArray[1]) >= -175)
        {
            y = -175f;
        }*/


        /*if(float.Parse(sArray[0]) != 0)
        {
            if(float.Parse(sArray[0]) > 175 || float.Parse(sArray[0]) < -175)
            {
                x = float.Parse(sArray[0]) / 10; 
            }
        }

        if (float.Parse(sArray[1]) != 0)
        {
            if (float.Parse(sArray[1]) > 175 || float.Parse(sArray[0]) < -175)
            {
                y = float.Parse(sArray[1]) / 10;
            }
        }*/

        /*if(float.Parse(sArray[0]) > 175 || float.Parse(sArray[0]) < -175)
        {
            x = float.Parse(sArray[0]) / 10; 
        }

        if (float.Parse(sArray[1]) > 175 || float.Parse(sArray[1]) < -175)
        {
            y = float.Parse(sArray[1]) / 10;
        }*/

        /*if(float.Parse(sArray[0]) > 1000 || float.Parse(sArray[0]) > -1000)
        {
            x = float.Parse(sArray[0]) / 10; 
        }

        if (float.Parse(sArray[1]) > 1000 || float.Parse(sArray[1]) > -1000)
        {
            y = float.Parse(sArray[1]) / 10;
        }*/
        if (float.Parse(sArray[0]) == 1750)
        {
            x = 175f;
        }
        else if (float.Parse(sArray[0]) == -1750)
        {
            x = -175f;
        }
        else
        {
            x = float.Parse(sArray[0]); 
        }

        if (float.Parse(sArray[1]) == 1750)
        {
            y = 175f;
        }
        else if (float.Parse(sArray[1]) == -1750)
        {
            y = -175f;
        }
        else
        {
            y = float.Parse(sArray[1]);
        }

        //Vector3 finalPos = new Vector3(float.Parse(sArray[0]), float.Parse(sArray[1]), 0); 
        Vector3 finalPos = new Vector3(x, y, 0);
        Debug.Log(finalPos);

        currentNum.text = position;
        GameObject NewColor = Instantiate(Sprite_Prefab, finalPos, Quaternion.identity);
        //NewColor.transform.SetParent(GameObject.FindGameObjectWithTag("Canvas").transform, false); 
        NewColor.transform.SetParent(currentLvl.transform, false);
        NewColor.tag = color;
    }


    public void current(GameObject lvl)
    {
        Debug.Log(lvl.transform.name); 
        currentLvl = lvl; 
    }
}
