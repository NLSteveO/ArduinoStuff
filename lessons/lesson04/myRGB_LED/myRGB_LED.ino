//www.elegoo.com
//2016.12.8

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

// define variables
int redValue;
int greenValue;
int blueValue;

// main loop
void loop() {
  #define delayTime 20 // fading time between colors

  redValue = 255;
  greenValue = 0;
  blueValue = 0;

  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);

  for(int i = 0; i < 255; i += 1) // bring green full when i=255
  {
    greenValue += 1;
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  for(int i = 0; i < 255; i += 1) // fades out red when i=255
  {
    redValue -= 1;
    analogWrite(RED, redValue);
    delay(delayTime);
  }

  for(int i = 0; i < 255; i += 1) // bring blue full when i=255
  {
    blueValue += 1;
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }

  for(int i = 0; i < 255; i += 1) // fades out green when i=255
  {
    greenValue -= 1;
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }

  for(int i = 0; i < 255; i += 1) // bring red full when i=255
  {
    redValue += 1;
    analogWrite(RED, redValue);
    delay(delayTime);
  }

  for(int i = 0; i < 255; i += 1) // fades out blue when i=255
  {
    blueValue -= 1;
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }
}
