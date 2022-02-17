/*

*/

void setup() {
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(7, LOW);
  delay(200);
  digitalWrite(7, HIGH);
  delay(200);
  digitalWrite(7, LOW);
  delay(1200);
  digitalWrite(8, HIGH);
  delay(200);
  digitalWrite(8, LOW);
  delay(200);
  digitalWrite(8, HIGH);
  delay(200);
  digitalWrite(8, LOW);
  delay(3000);
}

void loop() {
 digitalWrite(7, HIGH);
  delay(650);
  digitalWrite(7, LOW);
  delay(650);
  digitalWrite(8, HIGH);
  delay(650);
  digitalWrite(8, LOW);
  delay(650);
}
