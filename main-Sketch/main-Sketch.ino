int pinLB = 10;
int pinLF = 11;
int pinRF = 7;
int pinRB = 9;

void setup(){
 Serial.begin(9600);
 pinMode(pinLB, OUTPUT);

 pinMode(pinLF, OUTPUT);

 pinMode(pinRB, OUTPUT);

 pinMode(pinRF, OUTPUT); 
}

void loop(){
  rightForward();
  leftBackward();
  //stopBothMotors();
}

void stopBothMotors(){
 delay(100);
 digitalWrite(pinLB,LOW);
 digitalWrite(pinLF,LOW); 
 digitalWrite(pinRB, LOW);
 digitalWrite(pinRF, LOW);
}


void leftForward(){
 stopBothMotors();
 digitalWrite(pinLB,LOW);
 digitalWrite(pinLF,HIGH); 
}

void leftBackward(){
 stopBothMotors();
 digitalWrite(pinLB,HIGH);
 digitalWrite(pinLF,LOW); 
}

void rightForward(){
  stopBothMotors();
   digitalWrite(pinRB, LOW);
 digitalWrite(pinRF, HIGH);
}

void rightBackward(){
  stopBothMotors();
   digitalWrite(pinRB, HIGH);
 digitalWrite(pinRF, LOW);
}