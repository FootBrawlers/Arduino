#include<Wire.h>
#define SLAVE_ADDR 9
#define ANSWERSIZE 5
#define MASTER 6
String answer="whats up";
byte arr[]={1000,0,0};
void setup() 
{
  Wire.begin(SLAVE_ADDR);
  //Wire.onRequest(requestEvent);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}
void receiveEvent()
{
  int u = 0;
  while(0<Wire.available())
  {
    
    byte x= Wire.read();
    arr[u]=x;
    u=u+1;
  }
  Serial.println(arr[0]);
  Serial.println(arr[1]);
  Serial.println(arr[2]);
}
//void requestEvent()
//{
  //byte response[ANSWERSIZE];
  //for(byte i=0;i<ANSWERSIZE;i++)
  //{
    //response[i]=(byte)answer.charAt(i);
  //}
  //Wire.write(response,sizeof(response));
//}

void loop()
{
  if( arr[0]!=1000)
  {
    Wire.beginTransmission(MASTER);
    Wire.write(13);
    Wire.write(14);
    Wire.write(15);
    Wire.endTransmission();
  }
  delay(2000);
}
  
  // put your main code here, to run repeatedly:
