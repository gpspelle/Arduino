int led_vermelho = 7;
int led_amarelo = 4;
int led_verde = 1;

void setup() {
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void loop() {

  digitalWrite(led_vermelho, HIGH);
  delay(2000);
  digitalWrite(led_vermelho, LOW);

  digitalWrite(led_amarelo, HIGH);
  delay(2000);
  digitalWrite(led_amarelo, LOW);

  digitalWrite(led_verde, HIGH);
  delay(2000);
  digitalWrite(led_verde, LOW);

}
