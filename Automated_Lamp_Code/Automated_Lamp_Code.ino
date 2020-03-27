
void setup() {
 pinMode(5, OUTPUT);  //ON LED
 pinMode(6, OUTPUT);  //OFF LED
 pinMode(7, OUTPUT);  //SSR Control pin
}

void loop() {
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(43200000);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(43200000);
}
