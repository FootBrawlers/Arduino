#include <Wire.h>
#define SLAVE_ADDRESS 0x8
byte arr[]={0,0,0,0};
void setup() {
Wire.begin(SLAVE_ADDRESS);
Wire.onReceive(receiveEvent);
Serial.begin(9600);
}

// Function that executes whenever data is received from master
void receiveEvent(int howMany) {

  while (0<Wire.available()) {
    for(int i =0; i<4;i++){
    byte x = Wire.read(); // receive byte as a character
    arr[i]=x;
    }
  }
  Serial.println(arr[0]);
  Serial.println(arr[1]);
  Serial.println(arr[2]);
  Serial.println(arr[3]);
}
void loop() {
}
