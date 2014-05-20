void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int i;
for(i=0;i<=10;i++){
 Serial.println(i);
delay(3000); 
  
}

void serialEvent(){
 while(Serial.available()){
  Serial.println(Serial.parseInt()):
 } 
}

}


