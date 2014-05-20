void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 sendTel();
  while(true);
}

void sendTel(){
  Serial.print("ATD0988353909;\r");
  delay(1000);
  
}
