void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  recvTel();
  while(true){
   while(Serial.available()){
    Serial.write(Serial.read());
    delay(100);
   } 
  }
  
 while(true); 
}

void recvTel(){
 Serial.print("AT+CRC=1\r");
  delay(1000);
 Serial.print("AT+CLIP=1\r");
delay(1000); 
}
