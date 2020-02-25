#include<Wire.h>
#define SLAVE_ADDRESS 0x8
int DIR1 = 2;
int DIR2 = 3;
int PWM1 = A0; 
int PWM2 = A1;
int DIR11 = 6;
int DIR22 = 7;
int PWM12 = A6; 
int PWM22 = A7;
byte arr[]={0,0,0,0};
void setup() {
  Wire.begin(SLAVE_ADDRESS);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  pinMode(DIR1, OUTPUT);
  pinMode(DIR2, OUTPUT);
  pinMode(PWM1, OUTPUT);
  pinMode(PWM2, OUTPUT);
 //Declaring the pin modes, obviously they're outputs
  pinMode(PWM2, OUTPUT);
  pinMode(DIR11, OUTPUT);
  pinMode(DIR22, OUTPUT);
  pinMode(PWM12, OUTPUT);
  //Declaring the pin modes, obviously they're outputs
  pinMode(PWM22, OUTPUT);
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
  digitalWrite(DIR1, 5);
  digitalWrite(DIR2, 5);
  analogWrite(PWM2,180);
  analogWrite(PWM1,180);
  digitalWrite(DIR11, 5);
  digitalWrite(DIR22, 5);
  analogWrite(PWM22,180);
  analogWrite(PWM12,180);
}
else if (arr[0]==1){
  digitalWrite(DIR1, HIGH);
  digitalWrite(DIR2, HIGH);
  analogWrite(PWM2,180);
  analogWrite(PWM1,180);
  digitalWrite(DIR11, HIGH);  
  digitalWrite(DIR22, HIGH);
  analogWrite(PWM22,180);
  analogWrite(PWM12,180);
  }
else if(arr[0]==2){
  digitalWrite(DIR1, LOW);
  digitalWrite(DIR2, LOW);
  analogWrite(PWM2,180);
  analogWrite(PWM1,180);
  digitalWrite(DIR11, LOW);  
  digitalWrite(DIR22, LOW);
  analogWrite(PWM22,180);
  analogWrite(PWM12,180);
}
else if(arr[0]==3){
  digitalWrite(DIR1, HIGH);
 
  digitalWrite(DIR2, LOW);
  analogWrite(PWM2,180);
  analogWrite(PWM1,180);
  digitalWrite(DIR11, LOW);
  digitalWrite(DIR22, LOW);
  analogWrite(PWM22,180);
  analogWrite(PWM12,180);
}
else if(arr[0]==4){
  digitalWrite(DIR1, LOW);
  digitalWrite(DIR2, HIGH);
  analogWrite(PWM2,180);
  analogWrite(PWM1,180);
  digitalWrite(DIR11, LOW);
  digitalWrite(DIR22, HIGH);
  analogWrite(PWM22,180);
  analogWrite(PWM12,180);
  
}
}
void loop() {
 
}
