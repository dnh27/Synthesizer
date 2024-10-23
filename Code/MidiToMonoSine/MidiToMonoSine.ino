

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine1;          //xy=615.0833282470703,501.0833282470703
AudioSynthWaveformSine   sine2;          //xy=638.0833282470703,611.0833282470703
AudioEffectEnvelope      envelope1;      //xy=836.0833282470703,615.0833282470703
AudioEffectEnvelope      envelope2; //xy=855.1666870117188,505
AudioMixer4              mixer1;         //xy=991.0833282470703,585.0833282470703
AudioOutputI2S           i2s2; //xy=1136.166748046875,577.0000305175781
AudioConnection          patchCord1(sine1, envelope2);
AudioConnection          patchCord2(sine2, envelope1);
AudioConnection          patchCord3(envelope1, 0, mixer1, 1);
AudioConnection          patchCord4(envelope2, 0, mixer1, 0);
AudioConnection          patchCord5(mixer1, 0, i2s2, 0);
AudioConnection          patchCord6(mixer1, 0, i2s2, 1);
AudioControlSGTL5000     sgtl5000_1; //xy=685.1666870117188,722
// GUItool: end automatically generated code



// Keep track of the current note
bool noteActive = false;

byte V1currentNote = 0;
byte V2currentNote = 0;


void setup() {
  Serial.begin(115200);

  // MIDI Setup
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandleNoteOff(myNoteOff);

  // Audio Setup
  AudioMemory(20);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.32);

  sine1.amplitude(1);
  sine2.amplitude(1);
  
  mixer1.gain(0, 0.5);
}

void loop() {
  usbMIDI.read();

}

void myNoteOn(byte channel, byte note, byte velocity) {

  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);

  if (envelope1.isActive() == false){

    sine1.frequency(frequency);
    envelope1.noteOn();
    V1currentNote = note;
  }

  else if (envelope2.isActive() == false){

    sine2.frequency(frequency);
    envelope2.noteOn();
    V2currentNote = note;

  }
  
}

void myNoteOff(byte channel, byte note, byte velocity) {
  if (note == V1currentNote) {
    // Stop the current note only if it matches the note-off event
    envelope1.noteOff();
  }
  else if (note == V2currentNote) {
    // Stop the current note only if it matches the note-off event
    envelope2.noteOff();
  }
}
