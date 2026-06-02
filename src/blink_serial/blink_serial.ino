const int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  while (!Serial) { ; }  // wait for USB on some boards
  Serial.println(F("Zelbytes Arduino Foundations — Day 1"));
  Serial.println(F("HELLO WORLD"));
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
