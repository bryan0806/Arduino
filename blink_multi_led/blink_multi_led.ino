/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  for(int i=2;i<6;i++){
    pinMode(i,OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  
  if(Serial.available()>0){
   int inByte=Serial.read(); 
    
   switch (inByte){
     case 'a':
      digitalWrite(2,HIGH);
      break;
     case 'b':
       digitalWrite(3,HIGH);
       break;
     case 'c':
       digitalWrite(4,HIGH);
       break;
     case 'd':
       digitalWrite(5,HIGH);
       break;
     default:
       delay(1000);
       for(int i=2;i<6;i++){
        digitalWrite(i,LOW);
  }    
   }
    
  }
}
