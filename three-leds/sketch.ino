int red = 7;
int yellow = 6;
int green = 5;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(1000);
}