
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
// LFO
AudioSynthWaveform       waveform1;      //xy=794,677 

//VOICE 2
AudioSynthWaveformModulated waveformMod3;   //xy=1102,638
AudioSynthWaveformModulated waveformMod4;   //xy=1103,693

//VOICE 3
AudioSynthWaveformModulated waveformMod5;   //xy=1115,769
AudioSynthWaveformModulated waveformMod6;   //xy=1124,825

//VOICE 1
AudioSynthWaveformModulated waveformMod1;   //xy=1127,480
AudioSynthWaveformModulated waveformMod2;   //xy=1134,541

//VOICE 4
AudioSynthWaveformModulated waveformMod7;   //xy=1152,921
AudioSynthWaveformModulated waveformMod8;   //xy=1153,971
AudioEffectEnvelope      envelope2;      //xy=1376.88330078125,648.88330078125
AudioEffectEnvelope      envelope1;      //xy=1385,526
AudioEffectEnvelope      envelope3;      //xy=1385.0833740234375,767.0833740234375
AudioEffectEnvelope      envelope4;      //xy=1394.0833282470703,854.0833282470703

AudioMixer4              mixer1;         //xy=1645.566665649414,667.5666656494141

AudioOutputI2S           i2s2; //xy=1713.33349609375,674.8333129882812
AudioConnection          patchCord1(waveform1, 0, waveformMod1, 0);
AudioConnection          patchCord2(waveform1, 0, waveformMod2, 0);
AudioConnection          patchCord3(waveform1, 0, waveformMod3, 0);
AudioConnection          patchCord4(waveform1, 0, waveformMod4, 0);
AudioConnection          patchCord5(waveform1, 0, waveformMod5, 0);
AudioConnection          patchCord6(waveform1, 0, waveformMod7, 0);
AudioConnection          patchCord7(waveform1, 0, waveformMod8, 0);
AudioConnection          patchCord8(waveformMod3, envelope2);
AudioConnection          patchCord9(waveformMod4, envelope2);
AudioConnection          patchCord10(waveformMod5, envelope3);
AudioConnection          patchCord11(waveformMod6, envelope3);
AudioConnection          patchCord12(waveformMod1, envelope1);
AudioConnection          patchCord13(waveformMod2, envelope1);
AudioConnection          patchCord14(waveformMod7, envelope4);
AudioConnection          patchCord15(waveformMod8, envelope4);

AudioConnection          patchCord16(envelope1, 0, mixer1, 0);
AudioConnection          patchCord17(envelope3, 0, mixer1, 2);
AudioConnection          patchCord18(envelope2, 0, mixer1, 1);
AudioConnection          patchCord19(envelope4, 0, mixer1, 3);
AudioConnection          patchCord20(mixer1, 0, i2s2, 0);
AudioConnection          patchCord21(mixer1, 0, i2s2, 1);

AudioControlSGTL5000  sgtl5000_1; //xy=685.1666870117188,722
// GUItool: end automatically generated code

// Voice structure
struct Voice {
  bool active;
  byte note;
  unsigned long startTime;
  AudioSynthWaveformModulated *waveform1;
  AudioSynthWaveformModulated *waveform2;
  AudioEffectEnvelope *envelope;
};

// Array of voices
Voice voices[4];


void setupVoices() {
  voices[0] = {false, 0, 0, &waveformMod1, &waveformMod2, &envelope1};
  voices[1] = {false, 0, 0, &waveformMod3, &waveformMod4, &envelope2};
  voices[2] = {false, 0, 0, &waveformMod5, &waveformMod6, &envelope3};
  voices[3] = {false, 0, 0, &waveformMod7, &waveformMod8, &envelope4};
}

void myNoteOn(byte channel, byte note, byte velocity) {
  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);
  int voiceIndex = -1;

  AudioNoInterrupts();
  // Check for an inactive voice
  for (int i = 0; i < 4; i++) {
    if (!voices[i].active){
      
      voiceIndex = i;
      break;
    }
  }

  // If all voices are active, find the oldest one to steal
  // if (voiceIndex == -1) {
  //   unsigned long oldestTime = millis();
  //   for (int i = 0; i < 4; i++) {
  //     if (voices[i].startTime < oldestTime) {
  //       oldestTime = voices[i].startTime;
  //       voiceIndex = i;
  //     }
  //   }
  // }
  if (voiceIndex == -1){
    voiceIndex = 0;
  }

  // Activate the chosen voice
  // Voice &voice = voices[voiceIndex];
  
  voices[voiceIndex].waveform1->frequency(frequency);
  voices[voiceIndex].waveform2->frequency(frequency);
  voices[voiceIndex].envelope->noteOn();

  voices[voiceIndex].note = note;
  voices[voiceIndex].active = true;
  voices[voiceIndex].startTime = millis();
  AudioInterrupts();

  for (int i = 0; i<4; i++){
    Serial.print("Voice:");
    Serial.print(i);
    Serial.println(voices[i].note);
  }
}

void myNoteOff(byte channel, byte note, byte velocity) {
  // Look for the voice playing this note and turn it off
  for (int i = 0; i < 4; i++) {
    if (voices[i].active && voices[i].note == note) {
 
      voices[i].envelope->noteOff();
      voices[i].active = false;
      break;
    }
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
  sgtl5000_1.volume(0.32);

  //LFO
  waveform1.begin(0, 20, WAVEFORM_SINE);

  // waveformMod1.begin(1, 440, WAVEFORM_TRIANGLE);
  // waveformMod2.begin(1, 0, WAVEFORM_SQUARE);
  
  // waveformMod3.begin(1, 0, WAVEFORM_TRIANGLE);
  // waveformMod4.begin(1, 0, WAVEFORM_SQUARE);

  // waveformMod5.begin(1, 0, WAVEFORM_TRIANGLE);
  // waveformMod6.begin(1, 0, WAVEFORM_SQUARE);

  // waveformMod7.begin(1, 0, WAVEFORM_TRIANGLE);
  // waveformMod8.begin(1, 0, WAVEFORM_SQUARE);

  setupVoices();

  // Initialize voices with waveform types
  for (int i = 0; i < 4; i++) {
    voices[i].waveform1->begin(1, 0, WAVEFORM_SINE);
    voices[i].waveform2->begin(1, 0, WAVEFORM_SINE);
  }


}

void loop() {
  usbMIDI.read();
}

