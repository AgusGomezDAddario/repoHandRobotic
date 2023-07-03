#include <Servo.h>
Servo dedoGordo;
Servo dedoIndice;
Servo dedoAnular;
Servo dedoMenique;
Servo dedoMayor;

//definicion de pines para boton y leds
int LED_ROJO =13;
int LED_AMARILLO =12;
int LED_VERDE =11;
int estadoBoton = 0; //val se emplea para almacenar el estado del boton
int estado = 0; // 0 LED apagado, mientras que 1 encendido
int viejoValor = 0; // almacena el antiguo valor de val
int voidActual = 0; //indico el numero de void que voy a llamar y que se modifica constantemente

void setup() {
  dedoGordo.attach(3);
  dedoIndice.attach(4);
  dedoAnular.attach(6);
  dedoMenique.attach(7);
  dedoMayor.attach(5);
  pinMode(LED_ROJO,OUTPUT); // establecer que el pin digital es una señal de salida
  pinMode(LED_VERDE,OUTPUT); // establecer que el pin digital es una señal de salida
  pinMode(LED_AMARILLO,OUTPUT); // establecer que el pin digital es una señal de salida
//  pinMode(BOTON,INPUT); // y BOTON como señal de entrada
  randomSeed(analogRead(0));
  abrirMano(); //Necesario para las rutinas
  Serial.begin(9600); //Necesario para imprimir valores
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

//METODO I LOVE YOU
void i(){
  Serial.println("I");
  cerrarMano();
  dedoMenique.write(180);
  delay(3000);
}

void love(){
  Serial.println("love");
  cerrarMano();
  dedoIndice.write(180);
  delay(300);
  dedoGordo.write(180);
  delay(3000);
}

void you(){
  Serial.println("you");
  cerrarMano();
  dedoMenique.write(180);
  delay(300);
  dedoGordo.write(180);
  delay(3000);
}

void iLoveYou(){
  Serial.println("I love you");
  cerrarMano();
  dedoGordo.write(100);
  delay(300);
  dedoMayor.write(70);
  delay(300);
  dedoAnular.write(70);
}

void ILoveYouCompleto(){
  Serial.println("I love you completo");
  cerrarMano();
  i();
  delay(500);
  love();
  delay(500);
  you();
  delay(500);
  iLoveYou();
  delay(5000);
}

//METODO CODAPLI
void C(){
  Serial.println("C");
  dedoGordo.write(180);
  dedoIndice.write(150);
  dedoMayor.write(160);
  dedoAnular.write(160);
  dedoMenique.write(150);
}

void O(){
  Serial.println("O");
    dedoGordo.write(125);
    delay(100);
    dedoIndice.write(137);
    dedoMayor.write(137);
    dedoAnular.write(137);
    dedoMenique.write(130);
}

void D(){
  Serial.println("D");
    dedoGordo.write(125);
    dedoIndice.write(137);
    dedoMayor.write(137);
    dedoAnular.write(137);
    dedoMenique.write(180);
}

void A(){
  Serial.println("A");
  dedoIndice.write(120);
  dedoMayor.write(110);
  dedoAnular.write(110);
  dedoMenique.write(110);
  dedoGordo.write(170);
}

void P(){
  Serial.println("P");
  dedoGordo.write(180);
  dedoIndice.write(180);
  dedoMayor.write(150);
  dedoAnular.write(75);
  dedoMenique.write(75);
}

void L(){
  Serial.println("L");
  dedoIndice.write(180);
  dedoMayor.write(75);
  dedoAnular.write(75);
  dedoMenique.write(75);
  dedoGordo.write(180);
}

void I(){
  Serial.println("I");
  dedoGordo.write(170);
  dedoIndice.write(110);
  dedoMayor.write(75);
  dedoAnular.write(75);
  dedoMenique.write(180);

}

void CODAPLI(){
  Serial.println("Codapli");
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

//METODO PIEDRA, PAPEL Y TIJERAS
void piedra(){
  Serial.println("Piedra");
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
  Serial.println("Papel");
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
  Serial.println("Tijera");
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

void jugarPiedraPapelTijeras(){
  int numero = random(2);
    if(numero == 0){
      piedra();
      delay(2000);
      abrirMano();
    }
    if(numero == 1){
      papel();
      delay(2000);
      abrirMano();
    }
    if(numero == 2){
      tijera();
      delay(2000);
      abrirMano();
    }
}

void loop(){
    //Led verde: I love You
    //Led rojo: Codapli
    //Led Amarillo: piedraPapelTijeras

/*if(digitalRead(BOTON) == LOW){
    voidActual++;
}*/
if(voidActual < 3){
  voidActual = voidActual + 1;
  } else{
    voidActual = 1;
}
   switch (voidActual){
    case 1:
            digitalWrite(LED_AMARILLO, LOW);
            digitalWrite(LED_VERDE, HIGH);
            Serial.println("I Love You");
            ILoveYouCompleto();
            
        break;

        case 2:
            digitalWrite(LED_VERDE, LOW);
            digitalWrite(LED_ROJO, HIGH);
            Serial.println("Codapli");
            CODAPLI();
        break;

        case 3:
            digitalWrite(LED_ROJO, LOW);
            digitalWrite(LED_AMARILLO, HIGH);
            Serial.println("Piedra Papel Tijeras");
            jugarPiedraPapelTijeras();

        break;
    
        default:
            break;
    }

delay(3000);
}


