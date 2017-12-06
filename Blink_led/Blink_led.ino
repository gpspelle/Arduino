/*
 * Autor: Gabriel Pellegrino da Silva
 * Programa destinado a fazer um led vermelho piscar.
 * Para alterar a frequencia com que ele pisca, basta
 * trocar o valor do delay.
 * No caso foi usada a saida 10, sendo possivel utilizar
 * outras, menos a saida 0. (Por que?)
*/

int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
