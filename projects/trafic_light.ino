void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //red
  pinMode(12, OUTPUT); //yellow
  pinMode(11, OUTPUT); //green
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(3000);
  digitalWrite(13,LOW);


    digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12,LOW);


    digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(11,LOW);

}
