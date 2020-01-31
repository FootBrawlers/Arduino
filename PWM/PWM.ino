#include<Wire.h>
#define SLAVE_ADDRESS 0x8
int in1 = 4;
int in2 = 5;
int in3 = 6; 
int in4 = 7;
int enA = 9; 
int enB = 10; 
byte arr[]={0,0,0,0};
void setup() {
  Wire.begin(SLAVE_ADDRESS);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enA, OUTPUT);
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
if(arr[0]==0){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB,255);
  analogWrite(enA,255);
}
else if (arr[0]==1){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB,255);
  analogWrite(enA,255); 
  }
else if(arr[0]==2){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW); 
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB,255);
  analogWrite(enA,255);
}
else if(arr[0]==3){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB,255);
  analogWrite(enA,255);
}
else if(arr[0]==4){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB,100);
}
}
void loop() {
 
}
