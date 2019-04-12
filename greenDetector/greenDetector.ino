#define leftMotorA 5
#define leftMotorB 6
#define rightMotorA 3
#define rightMotorB 4

//digital pin
#define leftSensor 8
#define rightSensor 9

//analog pin
#define leftAnalog A0
#define rightAnalog A1

void setup() {
  pinMode(leftMotorA, OUTPUT);
  pinMode(leftMotorB, OUTPUT);
  pinMode(rightMotorA, OUTPUT);
  pinMode(rightMotorB, OUTPUT);

  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);  
  pinMode(leftAnalog, INPUT);
  pinMode(rightAnalog, INPUT);

  Serial.begin(9600);
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
  int leftSensorValue = digitalRead(leftSensor);
  int rightSensorValue = digitalRead(rightSensor);

  int leftAnalogValue = analogRead(leftAnalog);
  int rightAnalogValue = analogRead(rightAnalog);
  
  if(leftAnalogValue<=300 && rightAnalogValue<=300){
      forward();
  } 
  if(leftAnalogValue>=800 && leftAnalogValue<=1023){
      left();
  }
  if (leftAnalogValue>=300 && leftAnalogValue<=780){
        delay(300);
        left();
  }
  if(rightAnalogValue>=800 && rightAnalogValue<=1023){
    right();
  }
  if(rightAnalogValue>=300 && rightAnalogValue<=780){
    delay(300);
    right();
  }
}
