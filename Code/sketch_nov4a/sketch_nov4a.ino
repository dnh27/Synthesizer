#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine3;          //xy=345.33331298828125,101.33333587646484
AudioSynthWaveformSine   sine1;          //xy=345.3333435058594,310.3333435058594
AudioSynthWaveformSine   sine2;          //xy=346.33331298828125,202.33334350585938
AudioSynthWaveformSine   sine0;          //xy=358.3333435058594,426.3333435058594
AudioEffectEnvelope      envelope1;      //xy=569.3333740234375,311.3333435058594
AudioEffectEnvelope      envelope0;      //xy=584.3333435058594,419.3333435058594
AudioEffectEnvelope      envelope2;      //xy=609.3333129882812,217.33334350585938
AudioEffectEnvelope      envelope3;      //xy=610.3333282470703,118.33332824707031
AudioMixer4              mixer1;         //xy=739.3333435058594,389.3333435058594
AudioOutputI2S           i2s2;           //xy=884.3333435058594,381.3333435058594
AudioConnection          patchCord1(sine3, envelope3);
AudioConnection          patchCord2(sine1, envelope1);
AudioConnection          patchCord3(sine2, envelope2);
AudioConnection          patchCord4(sine0, envelope0);
AudioConnection          patchCord5(envelope1, 0, mixer1, 1);
AudioConnection          patchCord6(envelope0, 0, mixer1, 0);
AudioConnection          patchCord7(envelope2, 0, mixer1, 2);
AudioConnection          patchCord8(envelope3, 0, mixer1, 3);
AudioConnection          patchCord9(mixer1, 0, i2s2, 0);
AudioConnection          patchCord10(mixer1, 0, i2s2, 1);
// GUItool: end automatically generated code

AudioControlSGTL5000     sgtl5000_1;     //xy=685.1666870117188,722
// GUItool: end automatically generated code

// Keep track of Voice States, notes and Start Time

struct Voice {
  bool active;
  byte note;
  unsigned long startTime;

};

Voice voices[4];

void setupVoices() {
  voices[0] = {false, 0, 0};
  voices[1] = {false, 0, 0};
  voices[2] = {false, 0, 0};
  voices[3] = {false, 0, 0};
}

void setup() {
  Serial.begin(115200);

  // MIDI Setup
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandleNoteOff(myNoteOff);

  // Audio Setup
  AudioMemory(20);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.32);

  sine0.amplitude(1);
  sine1.amplitude(1);
  sine2.amplitude(1);
  sine3.amplitude(1);

  mixer1.gain(0, 0.25);
  mixer1.gain(1, 0.25);
  mixer1.gain(2, 0.25);
  mixer1.gain(3, 0.25);

  envelope0.attack(25); // Experiment between 10-20 ms
  envelope0.release(100); // Experiment between 100-200 ms
  envelope1.attack(25);
  envelope1.release(100);
  envelope2.attack(25);
  envelope2.release(100);
  envelope3.attack(25);
  envelope3.release(100);

  setupVoices();
  
}

void loop() {
  usbMIDI.read();
}

void myNoteOn(byte channel, byte note, byte velocity) {
  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);

  AudioNoInterrupts();
  // If the first voice is not active, use it
  if (!voices[0].active) {
    sine0.phase(0);
    sine0.frequency(frequency);
    envelope0.noteOff();  // Ensure envelope is reset
    envelope0.noteOn();
    voices[0].note = note;
    voices[0].active = true;

  }
  // If the first voice is busy, but the second one is free, use it
  else if (!voices[1].active) {
    sine1.phase(0);
    sine1.frequency(frequency);
    envelope1.noteOff();  // Ensure envelope is reset
    envelope1.noteOn();
    voices[1].note = note;
    voices[1].active = true;
  }

 
  else if (!voices[2].active) {
    sine2.phase(0);
    sine2.frequency(frequency);
    envelope2.noteOff();  // Ensure envelope is reset
    envelope2.noteOn();
    voices[2].note = note;
    voices[2].active = true;
  }


  else if (!voices[3].active) {
    sine3.phase(0);
    sine3.frequency(frequency);
    envelope3.noteOff();  // Ensure envelope is reset
    envelope3.noteOn();
    voices[3].note = note;
    voices[3].active = true;
  }

  else {
  // If all voices are active, find the oldest one to steal

    unsigned long oldestTime = millis();
    int oldestVoiceIndex = 0;
    for (int i = 0; i < 4; i++) {
      if (voices[i].startTime < oldestTime) {
        
        oldestTime = voices[i].startTime;
        oldestVoiceIndex = i;
      }
    }

    voices[oldestVoiceIndex].active = false;

    myNoteOn(channel, note, velocity);

  }

  AudioInterrupts();
}

void myNoteOff(byte channel, byte note, byte velocity) {
  if (note == voices[0].note) {
    envelope0.noteOff();
    voices[0].active = false;
  }

  else if (note == voices[1].note) {
    envelope1.noteOff();
    voices[1].active = false;
  }

  else if (note == voices[2].note) {
    envelope2.noteOff();
    voices[2].active = false;
  }

  else if (note == voices[3].note) {
    envelope3.noteOff();
    voices[3].active = false;
  }
}
