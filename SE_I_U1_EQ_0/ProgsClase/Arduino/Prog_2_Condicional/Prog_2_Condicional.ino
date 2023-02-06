byte numero; //0 - 255

void setup(){
  numero = 0;

  Serial.begin(9600); //baudios a los que se comunicara el Arduino con la Computadora
}

void loop(){
  Serial.print(numero);
  if(numero<255){
    numero++;
  }
  else{
    Serial.print( " -  Se ha llego al limite de la Variable");
  }  
  Serial.println();
  delay(1000);

}

