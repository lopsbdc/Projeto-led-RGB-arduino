void setup()
{
  pinMode(A0, INPUT); //Analog Zero, onde ta conectado
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(100);
  int valor = analogRead(A0);
  Serial.print("Valor lido no P1: ");
  digitalWrite(7, LOW);
  Serial.println(valor); //l = L
  delay(1000);
  
  digitalWrite(8, HIGH);
  delay(100);
  valor = analogRead(A0);
  Serial.print("Valor lido no P2: ");
  digitalWrite(8, LOW);
  Serial.println(valor); //l = L
  delay(1000);
}