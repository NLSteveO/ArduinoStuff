/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  letterH();    // turn the LED off by making the voltage LOW
  delay(750);   // wait for a second
  letterE();
  delay(750);
  letterL();
  delay(750);
  letterL();
  delay(750);
  letterO();
  delay(1750);
  letterW();
  delay(750);
  letterO();
  delay(750);
  letterR();
  delay(750);
  letterL();
  delay(750);
  letterD();
  delay(5000);
}

void letterH() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
  }
}

void letterE() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}

void letterL() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    if (i == 1) {
      delay(750);
    } else {
      delay(250);
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
  }
}

void letterO() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(750);
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
  }
}

void letterW() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    if (i == 0) {
      delay(250);
    } else {
      delay(750);
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
  }
}

void letterR() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    if (i == 1) {
      delay(750);
    } else {
      delay(250);
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
  }
}

void letterD() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    if (i == 0) {
      delay(750);
    } else {
      delay(250);
    }
    digitalWrite(LED_BUILTIN, LOW);
    delay(250);
  }
}
