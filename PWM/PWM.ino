#include<Wire.h>
#define SLAVE_ADDRESS 0x8
int in1 = 1;
int in2 = 2;
int in3 = 3;
int in4 = 4;
int in5 = 5;
int in6 = 6;
int in7 = 7; 
int in8 = 8;
int enA = 9; 
int enB = 10; 
int enC = 11;
int enD = 12;
byte arr[]={0,0,0,0};
void setup() {
  Wire.begin(SLAVE_ADDRESS);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(in3, OUTPUT); 
  pinMode(in4, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);
  pinMode(enC, OUTPUT);
  pinMode(enD, OUTPUT);
}
void receiveEvent(int howMany) {

  while (0<Wire.available()) {
    for(int i =0; i<4;i++){
    byte x = Wire.read(); 
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
  digitalWrite(in5, LOW);
  digitalWrite(in6, LOW);
  digitalWrite(in7, LOW);
  digitalWrite(in8, LOW);
  analogWrite(enB,arr[2]);
  analogWrite(enA,arr[2]);
  analogWrite(enC,arr[2]);
  analogWrite(enD,arr[2]);
}
else if (arr[0]==1){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
    digitalWrite(in5, LOW);
  digitalWrite(in6, HIGH);
  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
  analogWrite(enB,arr[2]);
  analogWrite(enA,arr[2]); 
  analogWrite(enC,arr[2]);
  analogWrite(enD,arr[2]);
  }
else if(arr[0]==2){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW); 
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);
  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
  analogWrite(enB,arr[2]);
  analogWrite(enA,arr[2]);
  analogWrite(enC,arr[2]);
  analogWrite(enD,arr[2]);
}
else if(arr[0]==3){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(in5, LOW);
  digitalWrite(in6, HIGH);
  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
  analogWrite(enB,arr[2]);
  analogWrite(enA,arr[2]);
  analogWrite(enC,arr[2]);
  analogWrite(enD,arr[2]);
}
else if(arr[0]==4){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);
  digitalWrite(in7, LOW);
  digitalWrite(in8, HIGH);
  analogWrite(enB,arr[2]);
  analogWrite(enA,arr[2]);
  analogWrite(enC,arr[2]);
  analogWrite(enD,arr[2]);
}
}
void loop() {
 
}
