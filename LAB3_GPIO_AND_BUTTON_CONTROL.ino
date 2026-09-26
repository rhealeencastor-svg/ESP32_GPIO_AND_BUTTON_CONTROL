const int BUTTON_PIN = 4;
const int LED1_PIN = 18;
const int LED2_PIN = 5; 

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP); 
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    digitalWrite(LED2_PIN, HIGH);
    digitalWrite(LED1_PIN, LOW);
  } else {
    digitalWrite(LED2_PIN, LOW);
    digitalWrite(LED1_PIN, HIGH);
  }
}