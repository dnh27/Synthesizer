#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine1;          // Voice 1
AudioSynthWaveformSine   sine2;          // Voice 2
AudioSynthWaveformSine   sine3;          // Voice 3
AudioSynthWaveformSine   sine4;          // Voice 4
AudioEffectEnvelope      envelope1;      // Envelope for Voice 1
AudioEffectEnvelope      envelope2;      // Envelope for Voice 2
AudioEffectEnvelope      envelope3;      // Envelope for Voice 3
AudioEffectEnvelope      envelope4;      // Envelope for Voice 4
AudioMixer4              mixer1;         // Mixer for combining voices
AudioOutputI2S           i2s1;           // Audio output
AudioConnection          patchCord1(sine1, envelope1);
AudioConnection          patchCord2(sine2, envelope2);
AudioConnection          patchCord3(sine3, envelope3);
AudioConnection          patchCord4(sine4, envelope4);
AudioConnection          patchCord5(envelope1, 0, mixer1, 0);
AudioConnection          patchCord6(envelope2, 0, mixer1, 1);
AudioConnection          patchCord7(envelope3, 0, mixer1, 2);
AudioConnection          patchCord8(envelope4, 0, mixer1, 3);
AudioConnection          patchCord9(mixer1, 0, i2s1, 0);
AudioConnection          patchCord10(mixer1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     // Audio shield control
// GUItool: end automatically generated code

// Keep track of voice states
struct Voice {
  bool active;
  byte note;
  unsigned long startTime;
};

Voice voices[4];

void setupVoices() {
  for (int i = 0; i < 4; i++) {
    voices[i] = {false, 0, 0};
  }
}

void setup() {
  Serial.begin(115200);

  // MIDI Setup
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandleNoteOff(myNoteOff);

  // Audio Setup
  AudioMemory(20);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.6);

  // Initialize oscillators
  sine1.amplitude(1);
  sine2.amplitude(1);
  sine3.amplitude(1);
  sine4.amplitude(1);

  // Initialize mixer gains
  mixer1.gain(0, 0.25);
  mixer1.gain(1, 0.25);
  mixer1.gain(2, 0.25);
  mixer1.gain(3, 0.25);

  // Initialize envelopes
  envelope1.attack(20);
  envelope1.release(150);
  envelope2.attack(20);
  envelope2.release(150);
  envelope3.attack(20);
  envelope3.release(150);
  envelope4.attack(20);
  envelope4.release(150);

  setupVoices();
}

void loop() {
  float volume = analogRead(A9);
  
  Serial.println(volume);
  delay(200);
  usbMIDI.read();
}

void myNoteOn(byte channel, byte note, byte velocity) {
  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);

  AudioNoInterrupts();

  // Check for available voices
  for (int i = 0; i < 4; i++) {
    if (!voices[i].active) {
      assignVoice(i, note, frequency);
      AudioInterrupts();
      return;
    }
  }

  // All voices are active, find the oldest one to steal
  unsigned long oldestTime = millis();
  int oldestVoiceIndex = 0;
  for (int i = 0; i < 4; i++) {
    if (voices[i].startTime < oldestTime) {
      oldestTime = voices[i].startTime;
      oldestVoiceIndex = i;
    }
  }

  voices[oldestVoiceIndex].active = false;
  assignVoice(oldestVoiceIndex, note, frequency);

  AudioInterrupts();
}

void myNoteOff(byte channel, byte note, byte velocity) {
  for (int i = 0; i < 4; i++) {
    if (voices[i].active && voices[i].note == note) {
      voices[i].active = false;
      stopVoice(i);
      break;
    }
  }
}

void assignVoice(int voiceIndex, byte note, float frequency) {
  voices[voiceIndex].note = note;
  voices[voiceIndex].startTime = millis();
  voices[voiceIndex].active = true;

  switch (voiceIndex) {
    case 0:
      sine1.frequency(frequency);
      envelope1.noteOn();
      break;
    case 1:
      sine2.frequency(frequency);
      envelope2.noteOn();
      break;
    case 2:
      sine3.frequency(frequency);
      envelope3.noteOn();
      break;
    case 3:
      sine4.frequency(frequency);
      envelope4.noteOn();
      break;
  }
}

void stopVoice(int voiceIndex) {
  switch (voiceIndex) {
    case 0:
      envelope1.noteOff();
      break;
    case 1:
      envelope2.noteOff();
      break;
    case 2:
      envelope3.noteOff();
      break;
    case 3:
      envelope4.noteOff();
      break;
  }
}
