int leds[] = {4, 5, 6,7};   //pines digitales: 0 - 13
int i, tam = 4;

void setup(){

for(i = 0; i<tam; i++){
  pinMode(leds[i], OUTPUT);
}

}

void loop(){ //16MhZ
    
  actionLEDs(1);
    delay(1000);
  actionLEDs(0);  
   delay(1000);

}

void actionLEDs(int v){
  for(i = 0; i<tam; i++){  
    digitalWrite(leds[i], v); //LA MAS RECOMENDADA
  }
}


