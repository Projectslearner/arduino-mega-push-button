/*
    Project name :  Push button
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-push-button
*/

const int buttonPin = 2; // Digital pin connected to the push button

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the push button
  int buttonState = digitalRead(buttonPin);

  // Check if the button is pressed (active low)
  if (buttonState == LOW) {
    Serial.println("Button pressed!");
    // Add your actions or functions here when the button is pressed
    delay(500); // Debounce delay
  }

  // Add other actions or conditions based on button state here

  delay(100); // Add a small delay to debounce the button
}
