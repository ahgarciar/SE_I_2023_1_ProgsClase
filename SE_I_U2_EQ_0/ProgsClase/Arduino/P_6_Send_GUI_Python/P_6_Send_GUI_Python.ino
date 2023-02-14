
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//Serial.println();
}

long val = 0;

void loop() {
 
  //Serial.println("Valor=" + String(valor));
  Serial.println(val);
  val++;
  delay(100);
}

// /dev/cu.usbmodem1101