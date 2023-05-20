const int ledCount = 8;

int ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 9 };

void setup() {
for (int i = 0; i < ledCount; i++) {
pinMode(ledPins[i], OUTPUT);
}
}

void loop() {
for (int i = 0; i < ledCount; i++) {
ledBarDisplay(i);
}
for (int i = ledCount; i > 0; i--) {
ledBarDisplay(i - 1);
}
}

void ledBarDisplay(int ledOn) {
for (int i = 0; i < ledCount; i++) {
if (i == ledOn)
digitalWrite(ledPins[i], HIGH);
else
digitalWrite(ledPins[i], LOW);
}
delay(100);
} 