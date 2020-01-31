#include<Wire.h>
#define SLAVE_ADDRESS 0x8
int in3 = 6; 
int in4 = 7; 
int enB = 10; 
byte arr[]={0,0,0,0};
void setup() {
  Wire.begin(SLAVE_ADDRESS);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  pinMode(in3, OUTPUT); //Declaring the pin modes, obviously they're outputs
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);
}
void receiveEvent(int howMany) {

  while (0<Wire.available()) {
    for(int i =0; i<4;i++){
    byte x = Wire.read(); // receive byte as a character
    arr[i]=x;
    }
  Serial.println(arr[0]);
  Serial.println(arr[1]);
  Serial.println(arr[2]);
  Serial.println(arr[3]);
}

if (arr[0]==1){
  //void TurnMotorA(){
  Serial.println("front");
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB,arr[3]);
//}  
}
else if(arr[0]==0){
  //void TurnOFFA(){
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB,100);
//}
}
else if(arr[0]==2){
//void TurnMotorA2(){
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB,arr[3]);
//}
}
}
void loop() {
 
}
