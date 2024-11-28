#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// Define pins for each potentiometer
const int pinVolume = A9;
const int pinDecay = A7;
const int pinRelease = A8;
const int pinSustain = A6;
const int pinAttack = A2;
const int pinVCO1 = A3;
const int pinVCO2 = A4;
const int pinHighPass = A0;
const int pinLowPass = A1;
const int pinFreq = A2;
//const int pinLFO = A14;

// Variables to store potentiometer values
int valueVolume = 0;
int valueDecay = 0;
int valueRelease = 0;
int valueSustain = 0;
int valueAttack = 0;
int valueVCO1 = 0;
int valueVCO2 = 0;
int valueHighPass = 0;
int valueLowPass = 0;
int valueFreq = 0;
//int valueLFO = 0;


// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=794,677
AudioSynthWaveformModulated waveformMod2;   //xy=1102,638
AudioSynthWaveformModulated waveformMod3;   //xy=1103,693
AudioSynthWaveformModulated waveformMod4;   //xy=1115,769
AudioSynthWaveformModulated waveformMod5;   //xy=1124,825
AudioSynthWaveformModulated waveformMod0;   //xy=1127,480
AudioSynthWaveformModulated waveformMod1;   //xy=1134,541
AudioSynthWaveformModulated waveformMod6;   //xy=1152,921
AudioSynthWaveformModulated waveformMod7;   //xy=1153,971
AudioEffectEnvelope      envelope1;      //xy=1377.88330078125,651.88330078125
AudioEffectEnvelope      envelope0;      //xy=1385,526
AudioEffectEnvelope      envelope2;      //xy=1395.0833740234375,749.0833740234375
AudioEffectEnvelope      envelope3;      //xy=1421.0833740234375,844.0833129882812
AudioMixer4              mixer1;         //xy=1643.566650390625,677.566650390625
AudioFilterStateVariable filter2;        //xy=1816,706
AudioFilterStateVariable filter1;        //xy=1819,641
AudioEffectDelay         delay1;         //xy=2007,705
AudioEffectFreeverb      freeverb1;      //xy=2209,738
AudioOutputI2S           i2s2; //xy=2450.33349609375,718.833251953125
AudioConnection          patchCord1(waveform1, 0, waveformMod0, 0);
AudioConnection          patchCord2(waveform1, 0, waveformMod1, 0);
AudioConnection          patchCord3(waveform1, 0, waveformMod2, 0);
AudioConnection          patchCord4(waveform1, 0, waveformMod3, 0);
AudioConnection          patchCord5(waveform1, 0, waveformMod4, 0);
AudioConnection          patchCord6(waveform1, 0, waveformMod6, 0);
AudioConnection          patchCord7(waveform1, 0, waveformMod7, 0);
AudioConnection          patchCord8(waveformMod2, envelope1);
AudioConnection          patchCord9(waveformMod3, envelope1);
AudioConnection          patchCord10(waveformMod4, envelope2);
AudioConnection          patchCord11(waveformMod5, envelope2);
AudioConnection          patchCord12(waveformMod0, envelope0);
AudioConnection          patchCord13(waveformMod1, envelope0);
AudioConnection          patchCord14(waveformMod6, envelope3);
AudioConnection          patchCord15(waveformMod7, envelope3);
AudioConnection          patchCord16(envelope1, 0, mixer1, 1);
AudioConnection          patchCord17(envelope0, 0, mixer1, 0);
AudioConnection          patchCord18(envelope2, 0, mixer1, 2);
AudioConnection          patchCord19(envelope3, 0, mixer1, 3);
AudioConnection          patchCord20(mixer1, 0, filter1, 0);
AudioConnection          patchCord21(mixer1, 0, filter2, 0);
AudioConnection          patchCord22(filter2, 2, delay1, 0);
AudioConnection          patchCord23(filter1, 0, delay1, 0);
AudioConnection          patchCord24(delay1, 0, freeverb1, 0);
AudioConnection          patchCord25(delay1, 1, freeverb1, 0);
AudioConnection          patchCord26(delay1, 2, freeverb1, 0);
AudioConnection          patchCord27(delay1, 3, freeverb1, 0);
AudioConnection          patchCord28(delay1, 4, freeverb1, 0);
AudioConnection          patchCord29(delay1, 5, freeverb1, 0);
AudioConnection          patchCord30(freeverb1, 0, i2s2, 0);
AudioConnection          patchCord31(freeverb1, 0, i2s2, 1);
AudioControlSGTL5000  sgtl5000_1; //xy=685.1666870117188,722
// GUItool: end automatically generated code

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

void readAllPotis(){
  valueVolume = analogRead(pinVolume);
  valueDecay = analogRead(pinDecay);
  valueRelease = analogRead(pinRelease);
  valueSustain = analogRead(pinSustain);
  valueAttack = analogRead(pinAttack);
  valueVCO1 = analogRead(pinVCO1);
  valueVCO2 = analogRead(pinVCO2);
  valueHighPass = analogRead(pinHighPass);
  valueLowPass = analogRead(pinLowPass);
  valueFreq = analogRead(pinFreq);
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

  pinMode(pinVolume, INPUT);
  pinMode(pinDecay, INPUT);
  pinMode(pinRelease, INPUT);
  pinMode(pinSustain, INPUT);
  pinMode(pinAttack, INPUT);
  pinMode(pinVCO1, INPUT);
  pinMode(pinVCO2, INPUT);
  pinMode(pinHighPass, INPUT);
  pinMode(pinLowPass, INPUT);
  pinMode(pinFreq, INPUT);
//  pinMode(pinLFO, INPUT);


  waveformMod0.begin(WAVEFORM_TRIANGLE);
  waveformMod1.begin(WAVEFORM_TRIANGLE);
  waveformMod2.begin(WAVEFORM_SAWTOOTH);
  waveformMod3.begin(WAVEFORM_SAWTOOTH);
  waveformMod4.begin(WAVEFORM_SINE);
  waveformMod5.begin(WAVEFORM_SINE);
  waveformMod6.begin(WAVEFORM_TRIANGLE);
  waveformMod7.begin(WAVEFORM_TRIANGLE);

  waveformMod0.amplitude(1);
  
  waveformMod1.amplitude(1);
  waveformMod2.amplitude(1);
  waveformMod3.amplitude(1);

  mixer1.gain(0, 0.15);
  mixer1.gain(1, 0.15);
  mixer1.gain(2, 0.15);
  mixer1.gain(3, 0.15);

  delay1.delay(0, 0);

  freeverb1.roomsize(0); // 0 to 1

  setupVoices();
  
}

void loop() {

  readAllPotis();

  envelope0.attack(valueAttack); // Experiment between 10-20 ms
  envelope0.release(valueRelease); // Experiment between 100-200 ms
  envelope1.attack(valueAttack);
  envelope1.release(valueRelease);
  envelope2.attack(valueAttack);
  envelope2.release(valueRelease);
  envelope3.attack(valueAttack);
  envelope3.release(valueRelease);

  filter1.frequency(valueLowPass);
  filter2.frequency(valueHighPass);

  usbMIDI.read();
}

void myNoteOn(byte channel, byte note, byte velocity) {
  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);

  AudioNoInterrupts();
  // If the first voice is not active, use it
  if (!voices[0].active) {
    waveformMod0.frequency(frequency);
    
    waveformMod1.frequency(frequency);
    
    envelope0.noteOff();  // Ensure envelope is reset
    envelope0.noteOn();
    voices[0].note = note;
    voices[0].active = true;

  }
  // If the first voice is busy, but the second one is free, use it
  else if (!voices[1].active) {
    waveformMod2.frequency(frequency);

    waveformMod3.frequency(frequency);

    envelope1.noteOff();  // Ensure envelope is reset
    envelope1.noteOn();
    voices[1].note = note;
    voices[1].active = true;
  }

 
  else if (!voices[2].active) {
    waveformMod4.frequency(frequency);

    waveformMod5.frequency(frequency);

    envelope2.noteOff();  // Ensure envelope is reset
    envelope2.noteOn();
    voices[2].note = note;
    voices[2].active = true;
  }


  else if (!voices[3].active) {
    waveformMod6.frequency(frequency);

    waveformMod7.frequency(frequency);

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

