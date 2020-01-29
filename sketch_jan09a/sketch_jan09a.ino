#include<Wire.h>

void setup() 
{
  Wire.begin();
  // put your setup code here, to run once:

}

void loop() 
{
  Wire.beginTransmission(0X40);
  Wire.write('0');
  Wire.endTransmission();
  delay(2000);

  Wire.beginTransmission(0X40);
  Wire.write('1');
  Wire.endTransmission();
  delay(2000);
  // put your main code here, to run repeatedly:

}
