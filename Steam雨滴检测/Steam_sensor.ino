/*
    Product: Steam Sensor 雨滴传感器
    Connection:
            VCC-5V
            GND-GND
            S-Analog pin 0  

    Author: Jiahui Tang
    Date: 2016-12-26
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  delay(200);
}
