  #include <Servo.h>
  Servo prueba;
  Servo prueba2;

  void setup() {
    prueba.attach(5);
    prueba2.attach(6);
  }

  void loop() {
    prueba.write(180);
    delay(2000);
    prueba2.write(180);
    delay(2000);
    prueba.write(100);
    delay(2000);
    prueba2.write(100);
    delay(2000);
  }
