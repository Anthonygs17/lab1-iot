// C++ code
//
int LEDROJO = 3;
int LEDVERDE = 6;
int LEDAMARILLO = 7;
int LEDROJOPEATON = 8;
int LEDVERDEPEATON = 9;

void setup(){
  pinMode(LEDROJO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAMARILLO, OUTPUT);
  pinMode(LEDROJOPEATON, OUTPUT);
  pinMode(LEDVERDEPEATON, OUTPUT);
  digitalWrite(LEDROJO, 0);
  digitalWrite(LEDVERDE, 0);
  digitalWrite(LEDAMARILLO, 0);
  digitalWrite(LEDROJOPEATON, 0);
  digitalWrite(LEDVERDEPEATON, 0);
}

void loop(){
  digitalWrite(LEDROJO, HIGH);
  digitalWrite(LEDVERDEPEATON, HIGH);
  delay(10000);
  digitalWrite(LEDROJO, LOW);
  digitalWrite(LEDVERDEPEATON, LOW);
  digitalWrite(LEDVERDE, HIGH);
  digitalWrite(LEDROJOPEATON, HIGH);
  delay(5000);
  digitalWrite(LEDVERDE, LOW);
  digitalWrite(LEDAMARILLO, HIGH);
  delay(2000);
  digitalWrite(LEDAMARILLO, LOW);
  digitalWrite(LEDROJOPEATON, LOW);
}