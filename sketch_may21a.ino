void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  char state;
  
  Serial.begin(9600);
}

void blink(){
  while(true){
      digitalWrite(13,HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(900);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      delay(900);
    if(Serial.available() > 0 && Serial.readString()=="end"){
     break; 
    }
  }
}
  

void loop() {
  if (Serial.available() > 0) {
    char state = Serial.read();
    if (state == 'a') {
      digitalWrite(13, HIGH);
    
    }
    if (state == 'b' ) {
      digitalWrite(12, HIGH);
      
    }
    
    if (state == 'c') {
      digitalWrite(11, HIGH);
    }
    if (state == 'd'){
      digitalWrite(10, HIGH);
    }
    if (state == 'e'){
      digitalWrite(9, HIGH);
    }
    if (state == 'f'){
      digitalWrite(8, HIGH);
    }
    if (state == 'g'){
      digitalWrite(7, HIGH);
    }
    if (state == 'O'){
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
    }
    if (state == 'F'){
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
    }
    if (state=='B'){  
      blink(); 
  }
  delay(50);
}
}

*******************me f prina *****
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  char state;
  
  Serial.begin(9600);
}

void blink(){
  for(int i=0; i<7; i++){
      digitalWrite(13,HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      delay(900);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      delay(900);
    if(Serial.available() > 0 && Serial.readString()=="end"){
     break; 
    }
  }
}

void prina(){
  while(true){
    digitalWrite(13,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(7,HIGH);
    delay(700);
    digitalWrite(12,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(8,HIGH);
    delay(700);
    if(Serial.available() > 0 && Serial.readString()=="end"){
     break; 
    }
  }
}
    

void loop() {
  if (Serial.available() > 0) {
     char state = Serial.read();
    if (state == 'a') {
      digitalWrite(13, HIGH);
    
    }
    if (state == 'b' ) {
      digitalWrite(12, HIGH);
      
    }
    
    if (state == 'c') {
      digitalWrite(11, HIGH);
    }
    if (state == 'd'){
      digitalWrite(10, HIGH);
    }
    if (state == 'e'){
      digitalWrite(9, HIGH);
    }
    if (state == 'f'){
      digitalWrite(8, HIGH);
    }
    if (state == 'g'){
      digitalWrite(7, HIGH);
    }
    if (state == 'O'){
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
    }
    if (state == 'F'){
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
    }
    if (state=='B'){  
      blink(); 
  }
    if(state=='y'){
      prina();
    }
  delay(50);
}
}
