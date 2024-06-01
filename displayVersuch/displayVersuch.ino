#include <LiquidCrystal.h>
void setup() {
  LiquidCrystal lcd(2, 3, 7, 6, 5, 4);

  lcd.begin(16, 2);
  //lcd.clear();

  //lcd.begin(16,2);
  lcd.setCursor(0, 0);
  lcd.print("     Wir <3     ");
  lcd.setCursor(0, 1);
  lcd.print("    Arduino!    ");
}

void loop() {

}
