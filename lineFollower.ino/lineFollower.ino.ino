#define motorA1 3
#define motorA2 4
#define motorB1 5
#define motorB2 6

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
}

void loop() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);

  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW);
}