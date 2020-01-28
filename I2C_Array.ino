// Include Arduino Wire library for I2C
#include <Wire.h>
 
// Define Slave I2C Address
#define SLAVE_ADDR 9
 
#define MASTER 6

byte arr[]={0,0,0};
 
void setup() {
 
  // Initialize I2C communications as Master
  Wire.begin(MASTER);
  Wire.onReceive(receiveEvent);
  
  // Setup serial monitor
  Serial.begin(9600);
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
 
void loop() {
  delay(1000);
  Serial.println("Write data to slave");
  
  // Write a charatre to the Slave
  Wire.beginTransmission(SLAVE_ADDR);
  Wire.write(10);
  Wire.write(11);
  Wire.write(12);
  Wire.endTransmission();
    
  Serial.println("Receive data");
  
  
}
