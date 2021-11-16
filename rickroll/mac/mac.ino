#include <Keyboard.h>
char ctrlKey = KEY_LEFT_GUI ;

void setup(){
  Keyboard.begin();
  delay (1000);
  Keyboard.press(ctrlKey);
  Keyboard.press('n');
  delay(10);
  Keyboard.releaseAll();
  Keyboard.print("https://www.youtube.com./watch?v=dQw4w9WgXcQ");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.press(' ');
  delay(10);
  Keyboard.releaseAll(); 

Keyboard.end();
}

void loop () {}
