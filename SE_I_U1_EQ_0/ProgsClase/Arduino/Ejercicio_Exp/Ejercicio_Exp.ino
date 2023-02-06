int potSel  = A0; //pin dondde se conecta el potenciometro de seleccion
int potInt = A1; //pin donde se coenctara el potenciometro de control

int led = 6; //led a controlar


void setup(){
    Serial.begin(9600);

}

int sel = 0; //almacena la informacion leida del potenciometro de seleccion
int valintepot = 0; //almacena la informacion leida del potenciometro de control
int valinteserial = 0 ;

void loop(){ //16MhZ

  sel = analogRead(potSel); //0 1023.  ==> 0 1
  valintepot = analogRead(potInt); //0 1023. ==> 0 255

  if(Serial.available()>0){ //si hay informacion que leer en el buffer...
    valintepot = Serial.readString().toInt(); //valor leido desde comunicacion serial
  }

  /////////

  if(sel > 511){ //aplicamos control serial
      analogWrite(led, valintepot);
  }else{ //aplicamos control por el pot
      valintepot = map(valintepot, 0, 1023, 0, 255);
      analogWrite(led, valintepot);
  }

  delay(100);

}


