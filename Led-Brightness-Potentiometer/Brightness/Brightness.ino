int potPin = A0;   // potentiometer
int ledPin = 9;    // LED (PWM pin)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);   // 0 to 1023

  // map to PWM range
  int brightness = map(potValue, 0, 1023, 0, 255);

  analogWrite(ledPin, brightness);

  delay(5);
}