  #include <Servo.h>
  Servo prueba; //dedo gordo
  Servo prueba2; //dedo indice
  Servo prueba3; //dedo fuck you
  Servo prueba4; //dedo anular
  Servo prueba5; //dedo menique

  void setup() {
    prueba.attach(3);
    prueba5.attach(7);
  }

  void loop() {
    prueba.write(180);
    delay(2000);
    prueba.write(80);
    delay(2000);
    prueba5.write(180);
    delay(2000);
    prueba5.write(60);
    delay(2000);


  }

