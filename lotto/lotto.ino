void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int lotto[7];
int i,num;

for(i=0;i<7;i++){
 num=random(1,100);
lotto[i]=num; 
}
for(i=0;i<7;i++){
  Serial.println(lotto[i]); 
}

while(true);
}
