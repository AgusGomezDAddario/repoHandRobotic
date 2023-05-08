#include <Servo.h>
Servo dedoGordo;
Servo dedoIndice;
Servo dedoAnular;
Servo dedoMenique;
Servo dedoMayor;

void setup() {
  dedoGordo.attach(3);
  dedoIndice.attach(4);
  dedoAnular.attach(6);
  dedoMenique.attach(7);
  dedoMayor.attach(5);
  abrirMano(); //Necesario para las rutinas
}


void abrirMano(){
  dedoGordo.write(180);
  delay(500);
  dedoIndice.write(180);
  delay(500);
  dedoMayor.write(180);
  delay(500);
  dedoAnular.write(180);
  delay(500);
  dedoMenique.write(180);
  delay(500);
}

void cerrarMano(){
  abrirMano();
  dedoGordo.write(90);
  delay(500);
  dedoIndice.write(70);
  delay(500);
  dedoMayor.write(70);
  delay(500);
  dedoAnular.write(70);
  delay(500);
  dedoMenique.write(70);
  delay(500);
}

void i(){
    cerrarMano();
    dedoMenique.write(180);
    delay(3000);
}

void love(){
    
}