using UnityEngine;
using System.Collections;
using System.IO.Ports;

public class sending : MonoBehaviour
{

    SerialPort sp = new SerialPort("COM3", 9600);


    int[] val = new int[5];
    int[] angle = new int[2];

    // Use this for initialization
    void Start()
    {
        sp.Open();  //Serial port open
        if(sp.IsOpen)
        {
            Debug.Log("열림1");
        }
        else
        {
            Debug.Log("안열림2321");
        }
        sp.ReadTimeout = 10;  //set Serial timeout
    }

    // Update is called once per frame
    void Update()
    {
        if (sp.IsOpen)
        {
            Debug.Log("열림2");
            try
            {
                if (BoneInColorSourceView.Fan == 1)
                {
                    sp.Write("1"); // 아두이노 코드의 1) 주석 확인
                    Debug.Log("좌측1");
                }
                else if (BoneInColorSourceView.Fan == 2)
                {
                    sp.Write("2"); // 아두이노 코드의 1) 주석 확인
                    Debug.Log("우측1");
                }
                val[0] = sp.ReadByte();  //read a byte
                if (val[0] == 0xff)
                {  //check start byte
                    for (int i = 1; i < 5; i++)
                    {
                        val[i] = sp.ReadByte();
                    }

                    angle[0] = val[1] * (val[2] - 2);  //calculate value
                    angle[1] = val[3] * (val[4] - 2);

                    transform.rotation = Quaternion.Euler(angle[1], 0f, angle[0]);  //rotate cube
                }
            }
            catch (System.Exception) { }
        }
        Debug.Log("안열림1");
    }

    // Use this for initialization
   /* void Start()
    {
        if (sp.IsOpen)
        {
            sp.Close();
            print("serial port is opened, so closed, plz restart unity.");
        }
        else
        {
            sp.Open();
            sp.ReadTimeout = 16;
        }
    }

    void OnApplicationQuit()
    {
        sp.Close();
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("안열림1");
        if (sp.IsOpen)
        {
            Debug.Log("열림1");
            try
            {
                if (BoneInColorSourceView.Fan == 1)
                {
                    sp.Write("1"); // 아두이노 코드의 1) 주석 확인
                    Debug.Log("좌측1");
                }
                else if(BoneInColorSourceView.Fan == 2)
                {
                    sp.Write("2"); // 아두이노 코드의 1) 주석 확인
                    Debug.Log("우측1");
                }
                

                string readedVal = sp.ReadLine();
                if (readedVal.Length > 0)
                {
                    print(readedVal);
                    float lightIntensity = float.Parse(readedVal);

                    //transform.light.intensity = lightIntensity;
                    
                }
            }
            catch (System.Exception e)
            {
                print(e.ToString());
            }
        }
        else
        {
            print("sp isn't opened");
        }
    }*/
}