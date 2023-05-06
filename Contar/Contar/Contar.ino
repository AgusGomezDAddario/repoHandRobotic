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
    delay(50);
    dedoIndice.write(70);
    delay(50);
    dedoMayor.write(70);
    delay(50);
    dedoAnular.write(70);
    delay(50);
    dedoMenique.write(80);
    delay(50);
    dedoGordo.write(90);
}

void contar(){
  delay(1000);
  uno();
  delay(1000);
  dos();
  delay(1000);
  tres();
  delay(1000);
  cuatro();
  delay(1000);
  cinco();
  delay(3000);
}

void dos(){
  dedoIndice.write(180);
}

void tres(){
  dedoMayor.write(180);
}

void uno(){
  cerrarMano();
  dedoGordo.write(180);
}

void cuatro(){
  dedoAnular.write(180);
}

void cinco(){
  dedoMenique.write(180);
}

void loop() {
  contar();
}
