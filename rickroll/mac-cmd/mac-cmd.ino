#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_RIGHT_GUI);
  Keyboard.press(' ');
  delay(50);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("Terminal");
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("Open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(50);
  Keyboard.end();
}
void loop() {}
