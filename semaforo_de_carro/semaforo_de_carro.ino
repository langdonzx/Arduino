int ledVermelho = 8;
int ledAmarelo = 7;
int ledVerde = 3;
int tempo = 3000;
int desligado = 100;

void setup() {
  // put your setup code here, to run once:
pinMode (ledVermelho, OUTPUT);
pinMode (ledAmarelo, OUTPUT);
pinMode (ledVerde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledVerde, HIGH);
delay (tempo);
digitalWrite(ledVerde, LOW);
delay (desligado);
digitalWrite(ledAmarelo, HIGH);
delay (tempo);
digitalWrite(ledAmarelo, LOW);
delay (desligado);
digitalWrite(ledVermelho, HIGH);
delay (tempo);
digitalWrite(ledVermelho, LOW);
delay (desligado);
}
