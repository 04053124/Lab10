#include <IRremote.h>
//led 燈要用第3腳
const int buttonPin=6;
int buttonState=0;
IRsend irsend;
void setup() {
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState=digitalRead(buttonPin);
  if(buttonState==HIGH)
  {
     irsend.sendNEC(0x4FB48B7, 32);
    }

}
