#include<Wire.h>
#include<SoftWire.h>
#define SLAVE_ADDR 9
#define MASTER 6
byte arr2[]={};;
byte arr1[]={232,0,0};
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
    arr2[u]=x;
    u=u+1;
  }
  Serial.println(arr2[0]);
  Serial.println(arr2[1]);
  Serial.println(arr2[2]);
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
  int i = 0;
  while(0<Wire.available())
  {
    if( arr1[i]!=arr2[i])
  {
    Wire.beginTransmission(MASTER);
    Wire.write(13);
    Wire.write(14);
    Wire.write(15);
    Wire.endTransmission();
  }
  
  delay(2000);
}
} 
  // put your main code here, to run repeatedly:
