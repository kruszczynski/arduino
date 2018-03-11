// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int redPin = 6;
int greenPin = 7;
int bluePin = 8;

int redReadPin = A0;
int greenReadPin = A1;
int blueReadPin = A2;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(redReadPin, INPUT);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  int redValue = analogRead(redReadPin) / 4;
  int greenValue = analogRead(greenReadPin) / 4;
  int blueValue = analogRead(blueReadPin) / 4;
  // print out the value you read:
  lcd.clear();
  lcd.print(redValue);
  lcd.print(", ");
  lcd.print(greenValue);
  lcd.print(", ");
  lcd.print(blueValue);
  setColor(redValue, greenValue, blueValue);

  delay(10);
}


void setColor(int red, int green, int blue) {
  red = 255 - red;
  green = 255 - green;
  blue = 255 - blue;

  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
