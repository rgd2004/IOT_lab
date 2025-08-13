const int ledPins[] = {2, 3, 4, 5, 6};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 5; i+2) {
    digitalWrite(ledPins[i], HIGH);
     delay(100);
    digitalWrite(ledPins[i],LOW);
    delay(200);
  }
  for (int i = 5; i >= 0; i-2) {
    digitalWrite(ledPins[i], HIGH);
     delay(100);
    digitalWrite(ledPins[i],LOW);
    delay(200);
  }
 
}