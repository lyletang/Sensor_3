// Rotation Sensor
// Author: Jiahui Tang
// Date: 2016-12-27

int ledPin = 3;       // PWM pin for LED signal
int temp;

void setup()
{
  Serial.begin(9600);     //Set serial baud rate to 9600 bps
}
void loop()
{
  int val;
  val=analogRead(0);      //Read slider value from analog 0
  Serial.println(val,DEC);//Print the value to serial port

  temp = (float)val / 1023 * 255;
  
  analogWrite(ledPin, temp);
  
  delay(100);
}
