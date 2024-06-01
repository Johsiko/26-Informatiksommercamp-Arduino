const int greenLedPin = 7;
const int blueLedPin = 2;
int blueLedState = LOW;
int greenLedState = HIGH;
long previousMillis = 0;
bool greenLightUp = true;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis > 500 && greenLightUp) {
    greenLedState = LOW;
    blueLedState = HIGH;
    greenLightUp = false;
    digitalWrite(greenLedPin, greenLedState);
    digitalWrite(blueLedPin, blueLedState);
    previousMillis = currentMillis;
  } else if(currentMillis - previousMillis > 500 && !greenLightUp) {
    greenLedState = HIGH;
    blueLedState = LOW;
    greenLightUp = true;
    digitalWrite(greenLedPin, greenLedState);
    digitalWrite(blueLedPin, blueLedState);
    previousMillis = currentMillis;
  }

}
