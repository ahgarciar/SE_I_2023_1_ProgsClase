int leds[] = {4, 5, 6,7};   //pines digitales: 0 - 13
int i, tam = 4;

void setup(){

for(i = 0; i<tam; i++){
  pinMode(leds[i], OUTPUT);
}

}

void loop(){ //16MhZ
    
  for(i = 0; i<tam; i++){
    digitalWrite(leds[i], 1); //LA MAS RECOMENDADA
  }

  delay(1000);

  for(i = 0; i<tam; i++){  
    digitalWrite(leds[i], 0); //LA MAS RECOMENDADA
  }

   ///OP2. -- lo más comun es esto
   delay(1000);

}


