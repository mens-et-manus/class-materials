void setup() {
  // put your setup code here, to run once:
  pinMode(47, OUTPUT);
  pinMode(5, INPUT);
  digitalWrite(47, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(47, HIGH);
  delay(100);
  int value = digitalRead(5);
  Serial.println(value);
}
