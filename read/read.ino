int incomingByte=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

int i,num;

if(Serial.available()>0){
 incomingByte=Serial.parseInt();

 Serial.print("I received:");
 Serial.println(incomingByte);
}


}
