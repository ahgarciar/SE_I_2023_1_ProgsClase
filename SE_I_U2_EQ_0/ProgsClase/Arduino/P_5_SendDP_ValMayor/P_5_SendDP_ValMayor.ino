int potenciometro = A0;

int totMuestras = 30;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//Serial.println();
}

int i,valor, valorMayor = -1; 

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<totMuestras; i++){ //-->Teorema del Limite Central
    valor = analogRead(potenciometro);

    if(valor>valorMayor){
      valorMayor = valor;
    }

  }
 
  //Serial.println("Valor=" + String(valor));
  Serial.println(valorMayor);
  delay(1000);
}

/*
Tarea: 
    1.- Poblacion
    2.- Muestra
    3.- Ruido
    4.- Preprocesamiento
    5.- Teorema del Limite Central
    6.- Modulo PySerial
    7.- Tratamiento del Ruido en Sensores
    8.- Técnicas de Filtrado y Suavisado para Sensores 

Programas: 
    1.- Preprocesamiento: MODA
    2.- Preprocesamiento: MEDIANA
*/

// /dev/cu.usbmodem1101