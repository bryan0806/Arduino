int ledFlag=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  byte rxData;
  if(Serial.available()){
    rxData=Serial.read();
    Serial.println(rxData);
  if(rxData=='a'){
    if(ledFlag==0){
     ledFlag=1;
    digitalWrite(13,HIGH); 
    }else{
     ledFlag=0;
     digitalWrite(13,LOW); 
    }
     
  }
  
  }

}
