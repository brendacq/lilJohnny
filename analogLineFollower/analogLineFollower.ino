#define leftMotorA 5
#define leftMotorB 6
#define rightMotorA 3
#define rightMotorB 4

//analog pin
#define leftAnalog A0
#define rightAnalog A1

void setup() {
  pinMode(leftMotorA, OUTPUT);
  pinMode(leftMotorB, OUTPUT);
  pinMode(rightMotorA, OUTPUT);
  pinMode(rightMotorB, OUTPUT);
    
  pinMode(leftAnalog, INPUT);
  pinMode(rightAnalog, INPUT);
}


void forward(){  
  digitalWrite(leftMotorA, LOW);
  digitalWrite(leftMotorB, HIGH);

  digitalWrite(rightMotorA, HIGH);
  digitalWrite(rightMotorB, LOW);
}

void left(){
  digitalWrite(leftMotorA, HIGH);
  digitalWrite(leftMotorB, LOW);

  digitalWrite(rightMotorA, HIGH);
  digitalWrite(rightMotorB, LOW);
}

void right(){
  digitalWrite(leftMotorA, LOW);
  digitalWrite(leftMotorB, HIGH);

  digitalWrite(rightMotorA, LOW);
  digitalWrite(rightMotorB, HIGH);
}

void back(){
  digitalWrite(leftMotorA, HIGH);
  digitalWrite(leftMotorB, LOW);

  digitalWrite(rightMotorA, LOW);
  digitalWrite(rightMotorB, HIGH);
}

void loop(){
  int leftAnalogValue = analogRead(leftAnalog);
  int rightAnalogValue = analogRead(rightAnalog);
  
  if(leftAnalogValue<=500 && rightAnalogValue<=500){
      forward();
  } 
  if(leftAnalogValue>=600 && rightAnalogValue<=500){
      left();
  }
  if (leftAnalogValue<=500 && rightAnalogValue>=600){
      right();
  }
}
  
