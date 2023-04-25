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
}

void abrirMano(){
  dedoGordo.write(180);
  delay(1000);
  dedoIndice.write(180);
  delay(1000);
  dedoIMayor.write(180);
  delay(1000);
  dedoAnular.write(180);
  delay(1000);
  dedoMenique.write(180);
  delay(1000);
}

void cerarMano(){
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

void contar(){
  cerarMano();
  delay(1000);
  dedoIndice.write(70);
  delay(1000);
  dedoMayor.write(70);
  delay(1000);
  dedoAnular.write(70);
  delay(1000);
  dedoMenique.write(70);
  delay(1000);
  dedoGordo.write(90);
  delay(1000);
}

void regresivo(){
  abrirMano();
  dedoGordo.write(90);
  delay(500);
  dedoMenique.write(70);
  delay(500);
  dedoAnular.write(70);
  delay(500);
  dedoMayor.write(70);
  delay(500);
  dedoIndice.write(70);
  delay(500);  
}

void saludo(){
  for (int i = 180; i <= 70; i--){
    dedoMenique.write(i);
    delay(50);
    dedoAnular.write(i + 36);
    delay(50);
    dedoMayor.write(i + 72);
    delay(50);
    dedoIndice.write(i + 108);
    delay(50);
    dedoGordo.write(i + 144);
    delay(50);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
