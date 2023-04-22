  #include <Servo.h>
  Servo prueba;
  Servo prueba2;
  Servo prueba3;
  Servo prueba4;
  Servo prueba5;

void setup() {
  prueba.attach(3);
//  prueba5.attach(7);
}

void loop() {
  prueba.write(180);
  delay(1000);
  prueba.write(90); //máximo del dedo gordo
  delay(1000);
  /*prueba5.write(180);
  delay(1000);
  prueba5.write(70); //máximo del menique
  delay(1000);*/
}
