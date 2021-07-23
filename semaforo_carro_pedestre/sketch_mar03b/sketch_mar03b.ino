
  int ledVerdeC = 8;
  int ledAmareloC = 7;
  int ledVermelhoC = 6;
  
  int ledVermelhoP = 11;
  int ledVerdeP = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledVermelhoC, OUTPUT);
  pinMode (ledAmareloC, OUTPUT);
  pinMode (ledVerdeC, OUTPUT);
  
  pinMode(ledVermelhoP, OUTPUT);
  pinMode(ledVerdeP, OUTPUT);
}

void loop() {
  //CARRO E PEDESTRE
  digitalWrite(ledVerdeC, HIGH);
  digitalWrite (ledVermelhoP, HIGH);
  delay (3000);
  digitalWrite(ledVerdeC, LOW);
  digitalWrite (ledVermelhoP, LOW);
  delay (100);
  digitalWrite(ledAmareloC, HIGH);
  digitalWrite (ledVermelhoP, LOW);
  delay (3000);
  digitalWrite(ledAmareloC, LOW);
  delay (100);
  digitalWrite(ledVermelhoC, HIGH);
  digitalWrite (ledVerdeP, HIGH);
  delay (3000);
  digitalWrite(ledVermelhoC, LOW);
  delay (100);
  
//  // PEDESTRE:
// digitalWrite (ledVermelhoP, HIGH);
// delay (3000);
// digitalWrite (ledVermelhoP, LOW);
// delay (100);
// digitalWrite (ledVerdeP, HIGH);
// delay (2000); 
// digitalWrite (ledVerdeP, LOW);
// delay (100);
// digitalWrite (ledVermelhoP, HIGH);
// delay (1000);
// digitalWrite (ledVermelhoP, LOW);
// delay (100);
// digitalWrite (ledVermelhoP, HIGH);
// delay (1000);
// digitalWrite (ledVermelhoP, LOW);
// delay (100);
// digitalWrite (ledVermelhoP, HIGH);
// delay (1000);
// digitalWrite (ledVermelhoP, LOW);
// delay (100);
}
