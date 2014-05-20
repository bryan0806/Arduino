void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int list[2][4]={{100,200,300,400},{500,600,700,800}};
  
  int i,j;
  int columnSum[4]={0,0,0,0};
  for(i=0;i<2;i++){
     int rowSum=0;
    for(j=0;j<4;j++){
          Serial.print(list[i][j]);
          Serial.print(" ");
          rowSum += list[i][j];
          columnSum[j] += list[i][j];
    }
    
    Serial.print(rowSum);
    Serial.println("");
  }
  
  for(i=0;i<4;i++){
   Serial.print(columnSum[i]); 
   Serial.print(" ");
  }
  
  while(true); 
}
