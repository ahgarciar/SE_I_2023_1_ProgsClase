int led1 = 4;   //pines digitales: 0 - 13
int led2 = 5;
int led3 = 6;

void setup(){
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop(){ //16MhZ
    
  digitalWrite(led1, HIGH);  
  digitalWrite(led2, true);
  digitalWrite(led3, 1); //LA MAS RECOMENDADA
  
  delay(1000);

  digitalWrite(led1, LOW);
  digitalWrite(led2, false);
  digitalWrite(led3, 0); //LA MAS RECOMENDADA

   ///OP2. -- lo más comun es esto
   delay(1000);

}


