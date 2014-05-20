#include <SoftwareSerial.h>
SoftwareSerial mySerial(10,11);

void setup() {
  // put your setup code here, to run once:
mySerial.begin(9600);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  byte rxData;
  if(mySerial.available()){
    rxData=mySerial.read();
    mySerial.println(rxData);
    Serial.println(rxData);
  }
  
  

}
