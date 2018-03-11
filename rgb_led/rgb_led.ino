// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int redPin = 6;
int greenPin = 7;
int bluePin = 8;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  setColor(255, 0, 0);
  lcd.clear();
  lcd.print("red");
  delay(1000);
  setColor(0, 255, 0);
  lcd.clear();
  lcd.print("green");
  delay(1000);
  setColor(0, 0, 255);
  lcd.clear();
  lcd.print("blue");
  delay(1000);
  setColor(255, 255, 0);
  lcd.clear();
  lcd.print("yellow");
  delay(1000);
  setColor(80, 0, 80);
  lcd.clear();
  lcd.print("purple");
  delay(1000);
  setColor(0, 255, 255);
  lcd.clear();
  lcd.print("aqua");
  delay(1000);
}


void setColor(int red, int green, int blue) {
  red = 255 - red;
  green = 255 - green;
  blue = 255 - blue;

  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
