#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

#define VCOButton 1
#define LFOBUTTON 0


// GUItool: begin automatically generated code
AudioMixer4              mixer1;         //xy=991.0833282470703,585.0833282470703
AudioOutputI2S           i2s2; //xy=1136.166748046875,577.0000305175781
AudioConnection          patchCord7(mixer1, 0, i2s2, 0);
AudioConnection          patchCord8(mixer1, 0, i2s2, 1);
AudioControlSGTL5000     sgtl5000_1; //xy=685.1666870117188,722
// GUItool: end automatically generated code




// Constants
const int NUM_VOICES = 4;  // Increase the number of voices for polyphony

// Arrays to hold multiple voices
AudioSynthWaveformModulated waveforms[NUM_VOICES];
AudioEffectEnvelope envelopes[NUM_VOICES];


int vco_waveform = 0;
int lfo_waveform = 0;

// Keep track of the current note
bool noteActive = false;
byte currentNote = 0;

AudioConnection* patchCords[NUM_VOICES * 2];  // Array to hold patch cords


void setup() {
  Serial.begin(115200);

  pinMode(VCOButton, INPUT_PULLUP);
  pinMode(LFOBUTTON, INPUT_PULLUP);


  // MIDI Setup
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandleNoteOff(myNoteOff);

  // Audio Setup
  AudioMemory(20);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.3);

  mixer1.gain(0, 0.5);
  
  for (int i = 0; i < NUM_VOICES; i++) {
    waveforms[i].begin(WAVEFORM_SINE);
    waveforms[i].amplitude(0.75);

    envelopes[i].attack(10.5);
    envelopes[i].decay(150);
    envelopes[i].sustain(0.8);
    envelopes[i].release(300);

    // Connect the waveform to the envelope, then to the mixer
    patchCords[i * 2] = new AudioConnection(waveforms[i], envelopes[i]);
    patchCords[i * 2 + 1] = new AudioConnection(envelopes[i], 0, mixer1, i);
  }
  
}


void loop() {
  usbMIDI.read();
}

// Track active notes and voices
struct Voice {
  byte note;
  bool active;
};

Voice voices[NUM_VOICES];

int findFreeVoice() {
  for (int i = 0; i < NUM_VOICES; i++) {
    if (!voices[i].active) {
      return i;
    }
  }
  return -1;  // No free voice found
}

const float DETUNE_AMOUNT = 1.01;  // Adjust this value to detune the oscillators slightly

void myNoteOn(byte channel, byte note, byte velocity) {

  int voiceIndex = findFreeVoice();
  if (voiceIndex >= 0) {
    float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);

    float detunedFrequency = frequency * pow(DETUNE_AMOUNT, voiceIndex);

    waveforms[voiceIndex].frequency(detunedFrequency);
    envelopes[voiceIndex].noteOn();
    
    voices[voiceIndex].note = note;
    voices[voiceIndex].active = true;
  }

}

void myNoteOff(byte channel, byte note, byte velocity) {
  for (int i = 0; i < NUM_VOICES; i++) {
    if (voices[i].active && voices[i].note == note) {
      envelopes[i].noteOff();
      voices[i].active = false;
      break;
    }
  }
}
