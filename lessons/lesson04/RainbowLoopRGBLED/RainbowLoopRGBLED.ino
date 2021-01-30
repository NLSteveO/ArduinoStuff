//www.elegoo.com
//2016.12.8

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

// main loop
void loop()
{
  // Time to stay on a color
  #define delayTime 1000

  // RED
  analogWrite(RED, 255);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
  delay(delayTime);

  // ORANGE
  analogWrite(RED, 255);
  analogWrite(GREEN, 127);
  analogWrite(BLUE, 0);
  delay(delayTime);

  // YELLOW
  analogWrite(RED, 255);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 0);
  delay(delayTime);

  // GREEN
  analogWrite(RED, 0);
  analogWrite(GREEN, 255);
  analogWrite(BLUE, 0);
  delay(delayTime);

  // BLUE
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 255);
  delay(delayTime);

  // INDIGO
  analogWrite(RED, 75);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 130);
  delay(delayTime);

  // VIOLET
  analogWrite(RED, 148);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 211);
  delay(delayTime);
}
