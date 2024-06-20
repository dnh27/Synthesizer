///////////////////////////////////
// copy the Design Tool code here
///////////////////////////////////
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine1;          //xy=763.566650390625,394.566650390625
AudioEffectEnvelope      envelope1;      //xy=927,390
AudioOutputI2S           i2s1;           //xy=1119,371
AudioConnection          patchCord1(sine1, envelope1);
AudioConnection          patchCord2(envelope1, 0, i2s1, 0);
AudioConnection          patchCord3(envelope1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=757.5666656494141,608.5666656494141
// GUItool: end automatically generated code


void setup() {
  Serial.begin(115200);

  //MIDI STUFF
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandleNoteOff(myNoteOff);

  //AUDIO STUFF
  AudioMemory(20);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.32);

  sine1.amplitude(0.75);
  

}
void loop() {
  // put your main code here, to run repeatedly:
  usbMIDI.read();

}

void myNoteOn(byte channel, byte note, byte velocity) {

  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);

  sine1.frequency(frequency);

  envelope1.noteOn();
}

void myNoteOff(byte channel, byte note, byte velocity) {
  
  envelope1.noteOff();

}