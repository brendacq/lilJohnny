#define motorA1 3
#define motorA2 4
#define motorB1 5
#define motorB2 6

#define leftSensor 8
#define rightSensor 9

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);

  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
}


void forward(){  
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);

  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH);
}

void left(){
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);

  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH);
}

void right(){
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);

  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
}

void back(){
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);

  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
}

void loop(){
  if(leftSensor==0 && rightSensor==0){
    forward();
  } else if(leftSensor==1 && rightSensor==0){
    left();
  } else if(leftSensor==0 && rightSensor==1){
    right();
  }
}
