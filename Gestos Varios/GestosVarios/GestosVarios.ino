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

void contar(){
  cerrarMano();
  delay(500);
  dedoIndice.write(180);
  delay(500);
  dedoMayor.write(180);
  delay(500);
  dedoAnular.write(180);
  delay(500);
  dedoMenique.write(180);
  delay(500);
  dedoGordo.write(180);
  delay(500);
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

void ok(){ //Maximo de los dos dedos
    //for (int i=0; i<=60; i++){
    dedoGordo.write(180-55);
    delay(500);
    dedoIndice.write(180-43);
    delay(500);
  //}
}

void ok2(){
  for (int i=0; i<=60; i++){
    dedoAnular.write(180-i*5);
    delay(500);
  }
}

//Maximo dedo Menique: 140
//Maximo dedo 

void loop() {
  abrirMano();
}
