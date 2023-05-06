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

void gesto(){
  dedoGordo.write(110);
  dedoIndice.write(135);
  delay(300);
  dedoIndice.write(180);
  dedoGordo.write(180);
  delay(300);
  dedoGordo.write(70);
  dedoMayor.write(125);
  delay(300);
  dedoMayor.write(180);
  dedoGordo.write(180);
  delay(300);
  dedoGordo.write(70);
  dedoAnular.write(145);
  delay(300);
  dedoAnular.write(180);
  dedoGordo.write(180);
  delay(300);
  dedoGordo.write(70);
  dedoMenique.write(120);
  delay(300);
  dedoMenique.write(180);
  dedoGordo.write(180);
  delay(300);
  
  
}


void loop() {
  gesto();
}
