byte led1=2;
byte led2=3;
byte led3=4;
byte led4=5;
byte led5=6;
byte led6=7;
byte led7=8;
byte led8=9;
byte leftButton=10;
byte rightButton=11;

byte valor=1;
int i=0;
int vel=40;

void setup() {
  for(i=led1;i<=led8;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
}

void loop() {
  if(valor==1){
    for(i=led1;i<=led8+3;i++){
      if(i<=led8){
        digitalWrite(i, HIGH);
      }
      
      if(i > 4){
        digitalWrite(i-3,LOW);
      }
      delay(vel);
    
    if(digitalRead(rightButton)){
      valor=0;          
    }
  }
}
 
  if(valor==0){
    for(i=led8;i>=led1-3;i--){  
      if(i>=led1){
        digitalWrite(i,HIGH);
      }
      
      if(i < 7){
        digitalWrite(i+3, LOW);      
      }
      delay(vel); 
      
      if(digitalRead(leftButton)){
      valor=1;
      } 
    }   
  }
}  
