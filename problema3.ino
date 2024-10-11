#include <Keypad.h>
const byte filas = 4;
const byte columnas = 4;
byte pinesFilas[] = {9,8,7,6};
byte pinesColumnas[] = {5,4,3,2};

char teclas[4][4] = {{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}};
Keypad teclado1 = Keypad( makeKeymap(teclas), pinesFilas,
pinesColumnas, filas, columnas);

// C++ code
int LEDROJO = 11;
int LEDVERDE = 12;
int LEDAMARILLO = 13;
int LEDROJOPEATON = 5;
int LEDVERDEPEATON = 3;

int delayRojo = 10000;
int delayVerde = 5000;
int delayAmarillo = 2000;

String hora = "";

void setup() {
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
  Serial.begin(9600);
  Serial.println("Teclado 4x4 con Biblioteca Keypad");
  Serial.println();
  hora="";
}

void loop() {
  //Verifica si alguna tecla fue presionada
  char tecla_presionada = teclado1.getKey();

  while(tecla_presionada != '#' && tecla_presionada != NO_KEY){
    hora += tecla_presionada;
    tecla_presionada = teclado1.getKey();
  }
  
  if(hora.length() > 0){
    if(hora.toInt() >= 16 && hora.toInt() <= 23){
        delayRojo*=2;
        delayAmarillo*=2;
        delayVerde*=2;

        digitalWrite(LEDROJO, HIGH);
        digitalWrite(LEDVERDEPEATON, HIGH);
        delay(delayRojo);
        digitalWrite(LEDROJO, LOW);
        digitalWrite(LEDVERDEPEATON, LOW);
        digitalWrite(LEDVERDE, HIGH);
        digitalWrite(LEDROJOPEATON, HIGH);
        delay(delayVerde);
        digitalWrite(LEDVERDE, LOW);
        digitalWrite(LEDAMARILLO, HIGH);
        delay(delayAmarillo);
        digitalWrite(LEDAMARILLO, LOW);
        digitalWrite(LEDROJOPEATON, LOW);
      }else if(hora.toInt() >= 0 && hora.toInt() <= 3){
        digitalWrite(LEDROJO, LOW);
        digitalWrite(LEDVERDE, LOW);
        digitalWrite(LEDAMARILLO, HIGH);
        delay(1000);
        digitalWrite(LEDAMARILLO, LOW);
        delay(1000);
      }else{
        digitalWrite(LEDROJO, HIGH);
        digitalWrite(LEDVERDEPEATON, HIGH);
        delay(delayRojo);
        digitalWrite(LEDROJO, LOW);
        digitalWrite(LEDVERDEPEATON, LOW);
        digitalWrite(LEDVERDE, HIGH);
        digitalWrite(LEDROJOPEATON, HIGH);
        delay(delayVerde);
        digitalWrite(LEDVERDE, LOW);
        digitalWrite(LEDAMARILLO, HIGH);
        delay(delayAmarillo);
        digitalWrite(LEDAMARILLO, LOW);
        digitalWrite(LEDROJOPEATON, LOW);
      }
  }
  
}