int enA = 12;
int in1 = 11;
int in2 = 10;
int in3 = 9;
int in4 = 8;
int enB = 7;

void setup() {

  // Set all the motor control pins to outputs
  //pinMode(enA, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  //pinMode(in1, OUTPUT);
  //pinMode(in2, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void loop() {

  //digitalWrite(in1, HIGH);
  //digitalWrite(in2, LOW);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 200);
  delay(2000);
  Serial.println("dssd");
    //digitalWrite(in1, LOW);
  //digitalWrite(in2, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 200);
    digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, 200);
  delay(2000);
  Serial.println("ds");
    // Turn off motors
  //digitalWrite(in1, LOW);
  //digitalWrite(in2, LOW);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enB, 200);
  delay(1000);
  Serial.println("d");

}/*
void directionControl() {
  // Set motors to maximum speed
  // For PWM maximum possible values are 0 to 25
  // Turn on motor A & B
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(2000);
  
  // Now change motor directions
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(2000);
  
  // Turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}*/
