#include <Keyboard.h>
 
void setup() {
  Keyboard.begin();
  delay(1000);
 
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(10);
  Keyboard.releaseAll();
  delay(500);
 
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
 
void loop() {}
