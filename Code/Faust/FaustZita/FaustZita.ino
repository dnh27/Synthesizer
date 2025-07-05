#include <Audio.h>
#include "FaustZita.h"

FaustZita faustZita;
AudioOutputI2S out;
AudioControlSGTL5000 audioShield;
AudioSynthNoisePink pink;

AudioConnection patchCord0(pink, 0, out, 0);

void setup() {
  AudioMemory(100);   
  audioShield.enable();
  pink.amplitude(1);
  audioShield.lineOutLevel(25);  // Set output to 1.62V p-p
  faustZita.setParamValue("level", 0);
}

void loop() {
}