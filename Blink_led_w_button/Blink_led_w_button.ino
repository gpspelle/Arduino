/*
 * Autor: Gabriel Pellegrino da Silva
 * Programa destinado a fazer um led vermelho piscar ao
 * ser pressionado um botao.
*/

int ledPin = 13;
int botao = 8;
int estadoBotao = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  estadoBotao = digitalRead(botao);

  if(estadoBotao == LOW) {
    digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
  }
}
