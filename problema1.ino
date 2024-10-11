// C++ code
//
int LEDROJO = 3;
int LEDAZUL = 4;
int button = 5;
int LEDVERDE = 6;
int LEDAMARILLO = 7;
void setup()
{
  pinMode(LEDROJO, OUTPUT);
  pinMode(LEDAZUL, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
  pinMode(LEDAMARILLO, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(LEDROJO, 0);
  digitalWrite(LEDAZUL, 0);
  digitalWrite(LEDVERDE, 0);
  digitalWrite(LEDAMARILLO, 0);
}

void loop()
{
  if(digitalRead(button) == 0){
    digitalWrite(LEDROJO, HIGH);
    delay(500);
    digitalWrite(LEDROJO, LOW);
    digitalWrite(LEDAZUL, HIGH);
    delay(500);
    digitalWrite(LEDAZUL, LOW);
    digitalWrite(LEDVERDE, HIGH);
    delay(500);
    digitalWrite(LEDVERDE, LOW);
    digitalWrite(LEDAMARILLO, HIGH);
    delay(500);
    digitalWrite(LEDAMARILLO, LOW);
  }else{
  	digitalWrite(LEDAMARILLO, HIGH);
    delay(500);
    digitalWrite(LEDAMARILLO, LOW);
    digitalWrite(LEDVERDE, HIGH);
    delay(500);
    digitalWrite(LEDVERDE, LOW);
    digitalWrite(LEDAZUL, HIGH);
    delay(500);
    digitalWrite(LEDAZUL, LOW);
    digitalWrite(LEDROJO, HIGH);
    delay(500);
    digitalWrite(LEDROJO, LOW);
  }
}