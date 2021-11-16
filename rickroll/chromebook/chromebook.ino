#include <Keyboard.h>

void setup(){
  Keyboard.begin();
  delay(1000);
  Keyboard.press(KEY_RIGHT_GUI);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("https://www.youtube.com./watch?v=dQw4w9WgXcQ");
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll(); 

Keyboard.end();
}


void loop () {}
