#include <SoftwareSerial.h>
SoftwareSerial mySerial(10,11);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000);
  mySerial.print('a');
  Serial.println('a');

}
