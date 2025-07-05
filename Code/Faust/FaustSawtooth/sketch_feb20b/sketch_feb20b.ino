#include <Audio.h>
#include "FaustSawtooth.h"

FaustSawtooth faustSawtooth;
AudioOutputI2S out;
AudioControlSGTL5000 audioShield;
AudioConnection patchCord0(faustSawtooth,0,out,0);
AudioConnection patchCord1(faustSawtooth,0,out,1);

void setup() {
  AudioMemory(2);
  audioShield.enable();
  audioShield.volume(0.1);
}

void loop() {
  faustSawtooth.setParamValue("freq",random(50,1000));
  delay(50);
}