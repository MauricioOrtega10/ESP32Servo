#include "Arduino.h"
#include <ESP32Servo.h> 

int pos = 0;

void setup()
{

}

//Inicializamos la posicion (en grados) del servo

void loop() {
  //Ciclo que posicionara el servo desde 0 hsta 180 grados
  for (pos = 0; pos <= 180; pos += 1) {
    //Movemos el servo a los grados que le entreguemos
    servo.write(pos);
    //Esperamos 15 milisegundos
    delay(15);
  }
  //Ciclo que posicionara el servo desde 180 hsta 0 grados
  for (pos = 180; pos >= 0; pos -= 1) {
    //Movemos el servo a los grados que le entreguemos
    servo.write(pos);
    //Esperamos 15 milisegundos
    delay(15);
  }
  
}
