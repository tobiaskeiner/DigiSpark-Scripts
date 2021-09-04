#include "DigiKeyboardDe.h"
long randNumber;

void setup() {
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(0);
}

void loop() {
  int num = 1; 
  randNumber = random(1,10);
  if (randNumber == num) {
    DigiKeyboardDe.sendKeyStroke(KEY_L, MOD_GUI_LEFT);
  }
  else {
    DigiKeyboardDe.delay(5000);
  }
}
