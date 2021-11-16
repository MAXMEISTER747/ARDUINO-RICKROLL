#include <Keyboard.h>

void setup(){
  Keyboard.begin();
  delay (1000);https://www.youtube.com./watch
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('t');
  delay(10);
  Keyboard.releaseAll();
  Keyboard.print("https://www.youtube.com./watch?v=dQw4w9WgXcQ");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.releaseAll();

Keyboard.end();
}

void loop () {}
