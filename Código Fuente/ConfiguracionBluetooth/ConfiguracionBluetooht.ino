//Notificar que la configuracion ha terminado
const int LED =13;
//Aqui hemos conectado la alimentacion
const int BTPWR=12;

char nombreBT[11]="TechKrowdM";
//Pin que asignaremos al bluetooht
char pin[5]="0000";
//Velocidad de comunicacion
char velocidad='4';//9600 baudios (las velocidades van del 1 -8
char modo='1';//Maestro 1, esclavo 0

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BTPWR, OUTPUT);

  Serial.begin(38400); //velocidad de BT en modo configuracion

  /* solo pulsador */
  digitalWrite(LED, HIGH);
  delay(4000);
  digitalWrite(LED, LOW);
  /*******************/

  digitalWrite(BTPWR, HIGH);
  delay(3000);
  //Indicamos que empezaremos a configurar
  Serial.print("AT\r\n");

  Serial.print("AT+NAME:");
  Serial.print(nombreBT);
  Serial.print("\r\n");

  Serial.print("AT+PIN:"); //AT+PSWD:
  Serial.print(pin);
  Serial.print("\r\n");

  Serial.print("AT+BAUD:");
  Serial.print(velocidad);
  Serial.print("\r\n");

  Serial.print("AT+MODE:");
  Serial.print(modo);
  Serial.print("\r\n");

  digitalWrite(LED, HIGH);
  
}

void loop(){
  
}
