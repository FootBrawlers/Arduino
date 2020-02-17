#include<Wire.h>
#define SLAVE_ADDRESS 0x8
int in1 = 2;
int in2 = 3;
int in3 = 4; 
int in4 = 5;
int enA = A0; 
int enB = A1; 
int in11 = 6;
int in22 = 7;
int in33 = 8; 
int in44 = 9;
int enA2 = A6; 
int enB2 = A7;
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
  pinMode(in11, OUTPUT);
  pinMode(in22, OUTPUT);
  pinMode(enA2, OUTPUT);
  pinMode(in33, OUTPUT); //Declaring the pin modes, obviously they're outputs
  pinMode(in44, OUTPUT);
  pinMode(enB2, OUTPUT);
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
  analogWrite(enB,180);
  analogWrite(enA,180);
  digitalWrite(in11, LOW);
  digitalWrite(in22, LOW);
  digitalWrite(in33, LOW);
  digitalWrite(in44, LOW);
  analogWrite(enB2,180);
  analogWrite(enA2,180);
}
else if (arr[0]==1){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB,180);
  analogWrite(enA,180);
  digitalWrite(in11, LOW);
  digitalWrite(in22, HIGH);  
  digitalWrite(in33, LOW);
  digitalWrite(in44, HIGH);
  analogWrite(enB2,180);
  analogWrite(enA2,180);
  }
else if(arr[0]==2){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW); 
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB,180);
  analogWrite(enA,180);
    digitalWrite(in11, HIGH);
  digitalWrite(in22, LOW); 
  digitalWrite(in33, HIGH);
  digitalWrite(in44, LOW);
  analogWrite(enB2,180);
  analogWrite(enA2,180);
}
else if(arr[0]==3){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB,180);
  analogWrite(enA,180);
    digitalWrite(in11, LOW);
  digitalWrite(in22, HIGH);
  digitalWrite(in33, HIGH);
  digitalWrite(in44, LOW);
  analogWrite(enB2,180);
  analogWrite(enA2,180);
}
else if(arr[0]==4){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB,180);
  analogWrite(enA,180);
    digitalWrite(in11, HIGH);
  digitalWrite(in22, LOW);
  digitalWrite(in33, LOW);
  digitalWrite(in44, HIGH);
  analogWrite(enB2,180);
  analogWrite(enA2,180);
  
}
}
void loop() {
 
}
