void setup()
{
  pinMode(13, OUTPUT); // configurando o pino 13 como saída p/ verde
  pinMode(12, OUTPUT); // configurando o pino 12 como saída p/ amarelo
  pinMode(11, OUTPUT); // configurando o pino 11 como saída p/ vermelho

}

void loop()// os semáforos verde e vermelho ficarão acessos por 2seg a mais que o amarelo
{
  // Vermelho
  digitalWrite(11, HIGH);
  delay(6000); 
  digitalWrite(11, LOW); 
  // Amarelo
  digitalWrite(12, HIGH);
  delay(2000); 
  digitalWrite(12, LOW); 
  // Verde
  digitalWrite(13, HIGH);
  delay(4000); 
  digitalWrite(13, LOW);
  // Amarelo
  digitalWrite(12, HIGH);
  delay(2000); 
  digitalWrite(12, LOW);
}
