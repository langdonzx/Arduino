  int ledVermelho = 8;
  int ledVerde = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledVermelho, OUTPUT);
  pinMode (ledVerde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite (ledVermelho, HIGH);
 delay (3000);
 digitalWrite (ledVermelho, LOW);
 delay (100);
 digitalWrite (ledVerde, HIGH);
 delay (2000); 
 digitalWrite (ledVerde, LOW);
 delay (100);
 digitalWrite (ledVermelho, HIGH);
 delay (1000);
 digitalWrite (ledVermelho, LOW);
 delay (100);
 digitalWrite (ledVermelho, HIGH);
 delay (1000);
 digitalWrite (ledVermelho, LOW);
 delay (100);
 digitalWrite (ledVermelho, HIGH);
 delay (1000);
 digitalWrite (ledVermelho, LOW);
 delay (100);
}
