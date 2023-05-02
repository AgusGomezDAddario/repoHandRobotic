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



void C(){
  dedoGordo.write(180);
  dedoIndice.write(150);
  dedoMayor.write(160);
  dedoAnular.write(160);
  dedoMenique.write(150);
}

void O(){
    dedoGordo.write(125);
    delay(100);
    dedoIndice.write(137);
    dedoMayor.write(137);
    dedoAnular.write(137);
    dedoMenique.write(130);
}

void D(){
    dedoGordo.write(125);
    dedoIndice.write(137);
    dedoMayor.write(137);
    dedoAnular.write(137);
    dedoMenique.write(180);
}

void A(){
  dedoIndice.write(120);
  dedoMayor.write(110);
  dedoAnular.write(110);
  dedoMenique.write(110);
  dedoGordo.write(170);
}

void P(){
  dedoGordo.write(180);
  dedoIndice.write(180);
  dedoMayor.write(150);
  dedoAnular.write(75);
  dedoMenique.write(75);
}

void L(){
  dedoIndice.write(180);
  dedoMayor.write(75);
  dedoAnular.write(75);
  dedoMenique.write(75);
  dedoGordo.write(180);
}

void I(){
  dedoGordo.write(170);
  dedoIndice.write(110);
  dedoMayor.write(75);
  dedoAnular.write(75);
  dedoMenique.write(180);

}



void CODAPLI(){
  abrirMano();
  delay(5000);
  C();
  delay(2000);
  O();
  delay(2000);
  D();
  delay(2000);
  dedoGordo.write(180);
  delay(100);
  A();
  delay(2000);
  P();
  delay(2000);
  L();
  delay(2000);
  I();
  delay(2000);
}

void loop() {
  CODAPLI();
}
