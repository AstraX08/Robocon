// Define motor pins
const int FL_CW = 2;  
const int FL_CCW = 3; 
const int FR_CW = 4;  
const int FR_CCW = 5;
const int RL_CW = 6;  
const int RL_CCW = 7; 
const int RR_CW = 8;  
const int RR_CCW = 9; 

const int ENA_FL = 10; 
const int ENA_FR = 11; 
const int ENA_RL = 12; 
const int ENA_RR = 13; 

void setup() {
  pinMode(FL_CW, OUTPUT);
  pinMode(FL_CCW, OUTPUT);
  pinMode(FR_CW, OUTPUT);
  pinMode(FR_CCW, OUTPUT);
  pinMode(RL_CW, OUTPUT);
  pinMode(RL_CCW, OUTPUT);
  pinMode(RR_CW, OUTPUT);
  pinMode(RR_CCW, OUTPUT);

  pinMode(ENA_FL, OUTPUT);
  pinMode(ENA_FR, OUTPUT);
  pinMode(ENA_RL, OUTPUT);
  pinMode(ENA_RR, OUTPUT);
}

void loop() {
  
  Forward(200); 
  delay(2000);

  Backward(150); 
  delay(2000);

  Left(180); 
  delay(2000);

  Right(180); 
  delay(2000);

  Clockwise(200); 
  delay(2000);

  Counterclockwise(200); 
  delay(2000);
}

void Forward(int pwm) {
  analogWrite(ENA_FL, pwm);
  analogWrite(ENA_FR, pwm);
  analogWrite(ENA_RL, pwm);
  analogWrite(ENA_RR, pwm);

  digitalWrite(FL_CW, HIGH);
  digitalWrite(FL_CCW, LOW);
  digitalWrite(FR_CW, HIGH);
  digitalWrite(FR_CCW, LOW);
  digitalWrite(RL_CW, HIGH);
  digitalWrite(RL_CCW, LOW);
  digitalWrite(RR_CW, HIGH);
  digitalWrite(RR_CCW, LOW);
}

void Backward(int pwm) {
  analogWrite(ENA_FL, pwm);
  analogWrite(ENA_FR, pwm);
  analogWrite(ENA_RL, pwm);
  analogWrite(ENA_RR, pwm);

  digitalWrite(FL_CW, LOW);
  digitalWrite(FL_CCW, HIGH);
  digitalWrite(FR_CW, LOW);
  digitalWrite(FR_CCW, HIGH);
  digitalWrite(RL_CW, LOW);
  digitalWrite(RL_CCW, HIGH);
  digitalWrite(RR_CW, LOW);
  digitalWrite(RR_CCW, HIGH);
}

void Left(int pwm) {
  analogWrite(ENA_FL, pwm);
  analogWrite(ENA_FR, pwm);
  analogWrite(ENA_RL, pwm);
  analogWrite(ENA_RR, pwm);

  digitalWrite(FL_CW, LOW);
  digitalWrite(FL_CCW, HIGH);
  digitalWrite(FR_CW, HIGH);
  digitalWrite(FR_CCW, LOW);
  digitalWrite(RL_CW, LOW);
  digitalWrite(RL_CCW, HIGH);
  digitalWrite(RR_CW, HIGH);
  digitalWrite(RR_CCW, LOW);
}

void Right(int pwm) {
  analogWrite(ENA_FL, pwm);
  analogWrite(ENA_FR, pwm);
  analogWrite(ENA_RL, pwm);
  analogWrite(ENA_RR, pwm);

  digitalWrite(FL_CW, HIGH);
  digitalWrite(FL_CCW, LOW);
  digitalWrite(FR_CW, LOW);
  digitalWrite(FR_CCW, HIGH);
  digitalWrite(RL_CW, HIGH);
  digitalWrite(RL_CCW, LOW);
  digitalWrite(RR_CW, LOW);
  digitalWrite(RR_CCW, HIGH);
}

void Clockwise(int pwm) {
  analogWrite(ENA_FL, pwm);
  analogWrite(ENA_FR, pwm);
  analogWrite(ENA_RL, pwm);
  analogWrite(ENA_RR, pwm);

  digitalWrite(FL_CW, HIGH);
  digitalWrite(FL_CCW, LOW);
  digitalWrite(FR_CW, LOW);
  digitalWrite(FR_CCW, HIGH);
  digitalWrite(RL_CW, HIGH);
  digitalWrite(RL_CCW, LOW);
  digitalWrite(RR_CW, LOW);
  digitalWrite(RR_CCW, HIGH);
}

void Counterclockwise(int pwm) {
  analogWrite(ENA_FL, pwm);
  analogWrite(ENA_FR, pwm);
  analogWrite(ENA_RL, pwm);
  analogWrite(ENA_RR, pwm);

  digitalWrite(FL_CW, LOW);
  digitalWrite(FL_CCW, HIGH);
  digitalWrite(FR_CW, HIGH);
  digitalWrite(FR_CCW, LOW);
  digitalWrite(RL_CW, LOW);
  digitalWrite(RL_CCW, HIGH);
  digitalWrite(RR_CW, HIGH);
  digitalWrite(RR_CCW, LOW);
}
