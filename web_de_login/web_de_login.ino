#include "DigiKeyboardDe.h"

void setup() {
  String password = "";
  String email = "";
  
  //open web.de
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(600);
  DigiKeyboardDe.print("https://www.web.de");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(10000);

  //consent cookies
  for (int i = 0; i < 2; i++){
    DigiKeyboardDe.sendKeyStroke(0x2b);
  }
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(10000);

  //login
  DigiKeyboardDe.sendKeyStroke(KEY_F, MOD_CONTROL_LEFT);//STRG + F
  DigiKeyboardDe.delay(100);
  DigiKeyboardDe.print("E-Mail-Adresse");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(500);
  
  DigiKeyboardDe.sendKeyStroke(41);//esc
  DigiKeyboardDe.delay(100);
  DigiKeyboardDe.sendKeyStroke(43);//tab
  DigiKeyboardDe.delay(100);

  DigiKeyboardDe.print(password);
  DigiKeyboardDe.delay(100);
  DigiKeyboardDe.sendKeyStroke(43,MOD_SHIFT_RIGHT);
  DigiKeyboardDe.delay(100);
  DigiKeyboardDe.print(email);
  DigiKeyboardDe.delay(100);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // put your main code here, to run repeatedly:

}
