#define leftMotorA 5
#define leftMotorB 6
#define rightMotorA 3
#define rightMotorB 4

#define leftSensor 8
#define rightSensor 9

void setup() {
  pinMode(leftMotorA, OUTPUT);
  pinMode(leftMotorB, OUTPUT);
  pinMode(rightMotorA, OUTPUT);
  pinMode(rightMotorB, OUTPUT);

  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);

  Serial.begin(9600); //debugging
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
  
  if(leftSensorValue==0){
    Serial.println("left zero");
    delay(1000);
  } else if(leftSensorValue==1){
    Serial.println("left um");
    delay(1000);
  }
  if(rightSensorValue==0){
    Serial.println("rightt zero");
    delay(1000);
  } else if(rightSensorValue==1){
    Serial.println("right um");
    delay(1000);
  }
}
