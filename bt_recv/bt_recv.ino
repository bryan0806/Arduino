int iLedPin=13;
void setup() {
  // put your setup code here, to run once:
pinMode(iLedPin,OUTPUT);
Serial.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()){
  char cCmd=Serial.read();
  Serial.println(cCmd);
  if(cCmd=='o'){
  digitalWrite(iLedPin,HIGH);
  }else if(cCmd=='c'){
   digitalWrite(iLedPin,LOW);
  }
  
}


  
}




