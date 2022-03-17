void setup() {
  // put your setup code here, to run once:
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(F("start https://www.youtube.com/watch?v=dQw4w9WgXcQ"))
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // put your main code here, to run repeatedly:

}
