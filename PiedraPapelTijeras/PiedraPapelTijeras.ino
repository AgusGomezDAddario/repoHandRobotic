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

void piedra(){
    dedoGordo.write(180);
    delay(50);
    dedoIndice.write(70);
    delay(50);
    dedoMayor.write(70);
    delay(50);
    dedoAnular.write(70);
    delay(50);
    dedoMenique.write(80);
}

void papel(){
  dedoGordo.write(180);
  delay(50);
  dedoIndice.write(180);
  delay(50);
  dedoMayor.write(180);
  delay(50);
  dedoAnular.write(180);
  delay(50);
  dedoMenique.write(180);
  delay(50);
}

void tijera(){
  dedoGordo.write(180);
    delay(20);
    dedoIndice.write(70);
    delay(20);
    dedoMayor.write(70);
    delay(20);
    dedoAnular.write(70);
    delay(20);
    dedoMenique.write(80);
    delay(70);
    dedoIndice.write(180);
    delay(70);
    dedoMayor.write(180);
    delay(70);
    dedoGordo.write(120);
}

void loop(){

  int randomNumber = rand() % 3;

    if(randomNumber == 0){
      piedra();
      delay(2000);
      abrirMano();
    }
    if(randomNumber == 1){
      papel();
      delay(2000);
      abrirMano();
    }
    if(randomNumber == 2){
      tijera();
      delay(2000);
      abrirMano();
    }

   randomNumber = rand() % 3;
}
