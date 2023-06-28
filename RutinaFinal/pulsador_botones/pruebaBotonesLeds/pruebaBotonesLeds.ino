int rojo=13;
int amarillo=12;
int verde=11;
int boton=7;
int estadoBoton=0;
int estado=0;
int rutina=1;
int viejoValor=0;
void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  estadoBoton = digitalRead(boton);
  if((estadoBoton == HIGH) && (viejoValor == LOW)){
    estado=1-estado;
    delay(10);
    rutina=rutina+1;
    Serial.println("Boton pulsado");
  }

  viejoValor = estadoBoton;

  if(rutina > 3){
    rutina = 1;
  }

  if(estado==1){
    switch(rutina){
      case 1: 
      digitalWrite(rojo, HIGH);
      digitalWrite(verde, HIGH);
      digitalWrite(amarillo, HIGH);
      break;

      case 2:
      digitalWrite(verde, HIGH);
      digitalWrite(rojo, HIGH);
      digitalWrite(amarillo, HIGH);
      break;

      case 3:
      digitalWrite(amarillo, HIGH);
      digitalWrite(verde, HIGH);
      digitalWrite(rojo, HIGH);
      break;

      default:
      break;
    }
  }
  delay(3000);
}
