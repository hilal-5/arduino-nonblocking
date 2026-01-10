/*
 * Project: Non-Blocking LED Blink
 * Author: [Hilal Başkaya]
 * Description: Blinking an LED without using the blocking delay() function.
 * Uses millis() to track time, allowing the MCU to do other tasks.
 */

// Define the LED pin (Built-in LED on Arduino Uno is Pin 13)
const int ledPin = 13; 

// Variables will change:
int ledState = LOW;             // ledState used to set the LED
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 200;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // 1. Get the current time
  unsigned long currentMillis = millis();

  // 2. Check if the interval has passed
  // (Current Time - Last Time >= 1000ms?)
  if (currentMillis - previousMillis >= interval) {
    
    // 3. Save the last time you blinked the LED
    previousMillis = currentMillis;

    // 4. If the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // 5. Apply the new state
    digitalWrite(ledPin, ledState);
  }
}
