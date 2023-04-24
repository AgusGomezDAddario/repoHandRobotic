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
  dedoGordo.write(180);
  delay(1000);
  dedoIndice.write(70);
  delay(1000);
  dedoAnular.write(70);
  delay(1000);
  dedoMenique.write(70);
  delay(1000);
}

void loop() {
  dedoMayor.write(50);
  delay(1000);
  dedoMayor.write(180);
  delay(1000);

}
