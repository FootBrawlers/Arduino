// Motor A connections
//int enA = 9;
//int in1 = 4;
//int in2 = 5;
// Motor B connections
int enB = 10;
int in3 = 6;
int in4 = 7;


void setup() {

  // Set all the motor control pins to outputs
  //pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  //pinMode(in1, OUTPUT);
  //pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void loop() {

  //digitalWrite(in1, HIGH);
  //digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
    //digitalWrite(in1, LOW);
  //digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);
    // Turn off motors
  //digitalWrite(in1, LOW);
  //digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(1000);

}/*
void directionControl() {
  // Set motors to maximum speed
  // For PWM maximum possible values are 0 to 25

  // Turn on motor A & B
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
  
  // Now change motor directions
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);
  
  // Turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}*/
