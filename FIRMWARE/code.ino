#include "Adafruit_TinyUSB.h"


const byte colPins[3] = {2, 1, 0};
const byte rowPins[4] = {3, 4, 5, 6};

char keys[4][3] = {//chage after i get parts for better functinality
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

const int CLK = 3;
const int DT = 4;
const int SW = 2;

int lastClkState;


Adafruit_USBD_HID keyboard(Adafruit_USBD_HID::BOOT_KEYBOARD);
Adafruit_USBD_HID consumerControl(Adafruit_USBD_HID::CONSUMER_CONTROL);

void setup() {
  keyboard.begin();
  consumerControl.begin();
  delay(500);

  // Keypad setup
  for(int c=0;c<3;c++){ pinMode(colPins[c], OUTPUT); digitalWrite(colPins[c], HIGH); }
  for(int r=0;r<4;r++){ pinMode(rowPins[r], INPUT_PULLUP); }

  // Encoder setup
  pinMode(CLK, INPUT);
  pinMode(DT, INPUT);
  pinMode(SW, INPUT_PULLUP);

  lastClkState = digitalRead(CLK);

  while(!TinyUSBDevice.mounted());
}

void loop(){
  readKeypad();
  readEncoderVolume();
  readButtonMute();
}

void readKeypad(){
  for(int c=0;c<3;c++){
    digitalWrite(colPins[c], LOW);
    for(int r=0;r<4;r++){
      if(digitalRead(rowPins[r]) == LOW){
        keyboard.keyPress(keys[r][c]);
        delay(150);
        keyboard.keyReleaseAll();
      }
    }
    digitalWrite(colPins[c], HIGH);
  }
}

void readEncoderVolume(){
  int current = digitalRead(CLK);

  if(current != lastClkState && current == HIGH){
    if(digitalRead(DT) == LOW){
      consumerControl.send(HID_USAGE_CONSUMER_VOLUME_INCREMENT); // Volume up
    } else {
      consumerControl.send(HID_USAGE_CONSUMER_VOLUME_DECREMENT); // Volume down
    }
    delay(120);
  }
  lastClkState = current;
}

void readButtonMute(){
  static bool last = HIGH;
  bool state = digitalRead(SW);

  if(state == LOW && last == HIGH){
    consumerControl.send(HID_USAGE_CONSUMER_MUTE); // Mute toggle
    delay(200);
  }
  last = state;
}
