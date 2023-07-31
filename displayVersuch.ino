#include <LiquidCrystal.h>

Liquidcrystal lcd(12, 11, 5, 4, 2);

int lastUpdate = 0;
int currentIndex = 0;

char* messages[] = {
  "     Wir <3     ",
  "    Arduino!    "
};

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setCoursor(0, 0);
  lcd.print(message[0]);
  lcd.setCoursor(0, 1);
  lcd.print(message[1]);
}

void loop() {
  // put your main code here, to run repeatedly:

}
