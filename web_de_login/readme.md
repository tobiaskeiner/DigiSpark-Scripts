# Web.de auto-login
This Script opens Web.de, accepts the cookies and logs in the specified account.

To use this script just fill the email and password variables.  
If you dont clear your cookies regularly, just remove the cookie accept part:  
```
//consent cookies
for (int i = 0; i < 2; i++){
  DigiKeyboardDe.sendKeyStroke(0x2b);
}
DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
DigiKeyboardDe.delay(10000);
```
