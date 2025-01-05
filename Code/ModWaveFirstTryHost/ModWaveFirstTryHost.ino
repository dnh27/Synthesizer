#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>
#include <USBHost_t36.h>
#include <Encoder.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=745,1466.25
AudioSynthWaveformModulated waveformMod2;   //xy=1169.6190403529574,706.2261526925222
AudioSynthWaveformModulated waveformMod1;   //xy=1176.7619857788086,617.6548385620117
AudioSynthWaveformModulated waveformMod4;   //xy=1193.1904296875,914.5476989746094
AudioSynthWaveformModulated waveformMod3;   //xy=1197.297607421875,784.9761962890625
AudioSynthWaveformModulated waveformMod6;   //xy=1197.476318359375,1065.261962890625
AudioSynthWaveformModulated waveformMod5;   //xy=1198.90478515625,996.3334350585938
AudioSynthWaveformModulated waveformMod8;   //xy=1206.6904296875,1295.7975463867188
AudioSynthWaveformModulated waveformMod9;   //xy=1206.75,1376.75
AudioSynthWaveformModulated waveformMod7;   //xy=1212.2261962890625,1209.9047241210938
AudioSynthWaveformModulated waveformMod10;  //xy=1215.25,1507.5
AudioSynthWaveformModulated waveformMod11;  //xy=1219,1578.75
AudioSynthWaveformModulated waveformMod12;  //xy=1220.25,1671.25
AudioSynthWaveformModulated waveformMod16; //xy=1229.300537109375,2080.5386962890625
AudioSynthWaveformModulated waveformMod13; //xy=1230.738037109375,1814.3096923828125
AudioSynthWaveformModulated waveformMod17;  //xy=1233.050537109375,2151.7886962890625
AudioSynthWaveformModulated waveformMod14; //xy=1234.488037109375,1885.5596923828125
AudioSynthWaveformModulated waveformMod18; //xy=1234.300537109375,2244.2886962890625
AudioSynthWaveformModulated waveformMod15; //xy=1235.738037109375,1978.0596923828125
AudioEffectEnvelope      envelope4;      //xy=1478.7618408203125,1559.9404907226562
AudioEffectEnvelope      envelope2;      //xy=1495.3333260672432,978.4761221749441
AudioEffectEnvelope      envelope6; //xy=1492.8123779296875,2132.9791870117188
AudioEffectEnvelope      envelope5; //xy=1494.2498779296875,1866.7501831054688
AudioEffectEnvelope      envelope3;      //xy=1497.2261962890625,1289.7262268066406
AudioSynthNoisePink      pink1;          //xy=1514.66650390625,1452.6666259765625
AudioEffectEnvelope      envelope1;      //xy=1518.369140625,663.5475921630859
AudioMixer4              mixer2;         //xy=1739.428611755371,1554.5714149475098
AudioMixer4              mixer1;         //xy=1754.7618026733398,1373.3332786560059
AudioFilterStateVariable filter1;        //xy=2098.9048233032227,1462.1903686523438
AudioFilterStateVariable filter2;        //xy=2336.428535461426,1477.5002794265747
AudioOutputI2S           i2s1;           //xy=2612.000732421875,1463.1190185546875
AudioConnection          patchCord1(waveform1, 0, waveformMod1, 0);
AudioConnection          patchCord2(waveform1, 0, waveformMod2, 0);
AudioConnection          patchCord3(waveform1, 0, waveformMod3, 0);
AudioConnection          patchCord4(waveform1, 0, waveformMod4, 0);
AudioConnection          patchCord5(waveform1, 0, waveformMod5, 0);
AudioConnection          patchCord6(waveform1, 0, waveformMod6, 0);
AudioConnection          patchCord7(waveform1, 0, waveformMod7, 0);
AudioConnection          patchCord8(waveform1, 0, waveformMod8, 0);
AudioConnection          patchCord9(waveform1, 0, waveformMod9, 0);
AudioConnection          patchCord10(waveform1, 0, waveformMod10, 0);
AudioConnection          patchCord11(waveform1, 0, waveformMod11, 0);
AudioConnection          patchCord12(waveform1, 0, waveformMod12, 0);
AudioConnection          patchCord13(waveform1, 0, waveformMod13, 0);
AudioConnection          patchCord14(waveform1, 0, waveformMod14, 0);
AudioConnection          patchCord15(waveform1, 0, waveformMod15, 0);
AudioConnection          patchCord16(waveform1, 0, waveformMod16, 0);
AudioConnection          patchCord17(waveform1, 0, waveformMod17, 0);
AudioConnection          patchCord18(waveform1, 0, waveformMod18, 0);
AudioConnection          patchCord19(waveformMod2, envelope1);
AudioConnection          patchCord20(waveformMod1, envelope1);
AudioConnection          patchCord21(waveformMod4, envelope2);
AudioConnection          patchCord22(waveformMod3, envelope1);
AudioConnection          patchCord23(waveformMod6, envelope2);
AudioConnection          patchCord24(waveformMod5, envelope2);
AudioConnection          patchCord25(waveformMod8, envelope3);
AudioConnection          patchCord26(waveformMod9, envelope3);
AudioConnection          patchCord27(waveformMod7, envelope3);
AudioConnection          patchCord28(waveformMod10, envelope4);
AudioConnection          patchCord29(waveformMod11, envelope4);
AudioConnection          patchCord30(waveformMod12, envelope4);
AudioConnection          patchCord31(waveformMod16, envelope6);
AudioConnection          patchCord32(waveformMod13, envelope5);
AudioConnection          patchCord33(waveformMod17, envelope6);
AudioConnection          patchCord34(waveformMod14, envelope5);
AudioConnection          patchCord35(waveformMod18, envelope6);
AudioConnection          patchCord36(waveformMod15, envelope5);
AudioConnection          patchCord37(envelope4, 0, mixer2, 0);
AudioConnection          patchCord38(envelope2, 0, mixer1, 1);
AudioConnection          patchCord39(envelope6, 0, mixer2, 2);
AudioConnection          patchCord40(envelope5, 0, mixer2, 1);
AudioConnection          patchCord41(envelope3, 0, mixer1, 2);
AudioConnection          patchCord42(pink1, 0, mixer1, 3);
AudioConnection          patchCord43(pink1, 0, mixer2, 3);
AudioConnection          patchCord44(envelope1, 0, mixer1, 0);
AudioConnection          patchCord45(mixer2, 0, filter1, 0);
AudioConnection          patchCord46(mixer1, 0, filter1, 0);
AudioConnection          patchCord47(filter1, 0, filter2, 0);
AudioConnection          patchCord48(filter2, 2, i2s1, 0);
AudioConnection          patchCord49(filter2, 2, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=2332.40234375,1058.23828125
// GUItool: end automatically generated code


// GUItool: end automatically generated code


// GUItool: end automatically generated code

 // sensorValue = analogRead(A0); w oberer detent
  // sensorValue = analogRead(A1); w, 2ter von links unten
  // sensorValue = analogRead(A2); w, 3ter von rechts oben
  // sensorValue = analogRead(A3); w, unten rechts

  // sensorValue = analogRead(A10); x
  // sensorValue = analogRead(A11); w, ganz links oben
  // sensorValue = analogRead(A12); w, ganz unten links
  // sensorValue = analogRead(A13); x
  // sensorValue = analogRead(A14); w, 2ter von links oben
  // sensorValue = analogRead(A15); w 3ter von links unten
  // sensorValue = analogRead(A16); w, 2ter von rechts unten
  // sensorValue = analogRead(A17); w, 3ter von links oben

// POTI DEFINITIONS
#define destinationPin A0
#define reverbPin A1
#define hpResPin A2
#define dynamicPin A3
// #define noise A10
#define lpCutPin A11
#define echoPin A12
// #define volume A13
#define lpResPin A14
#define distortPin A15
#define pedalPin A16
#define hpCutPin A17

//ENCODER DEFINITIONS
#define encAA 2
#define encAB 3
#define encASw 4

#define encBA 5
#define encBB 10
#define encBSw 11

#define encCA 6
#define encCB 9
#define encCSw 8

#define encDA 12
#define encDB 28
#define encDSw 29




// Potentiometer State Variables
int destinationValue = 0;
int reverbValue = 0;
int hpResValue = 0;
int dynamicValue = 0;
int lpCutValue = 0;
int echoValue = 0;
int lpResValue = 0;
int distortValue = 0;
int pedalValue = 0;
int hpCutValue = 0;

// Encoder State Variables
long encALast = 0;
long encBLast = 0;
long encCLast = 0;
long encDLast = 0;

// Encoder objects
Encoder encA(encAA, encAB);
Encoder encB(encBA, encBB);
Encoder encC(encCA, encCB);
Encoder encD(encDA, encDB);

float distortWetLevel = 0.5;
float distortDryLevel = 0.5;

float reverbWetLevel = 0.5;
float reverbDryLevel = 0.5;

float echoWetLevel = 0.5;
float echoDryLevel = 0.5;

float noiseWetLevel = 0.5;
float noiseDryLevel = 0.5;

// Keep track of voice states
struct Voice {
  bool active;
  byte note;
  unsigned long startTime;
};
const int VOICE_AMOUNT = 6;

Voice voices[VOICE_AMOUNT];

void setupVoices() {
  for (int i = 0; i < VOICE_AMOUNT; i++) {
    voices[i] = {false, 0, 0};
  }
}


USBHost myusb;         // Create USBHost object
MIDIDevice midi1(myusb); // Create a MIDI device object on USBHost

// Audio object declarations remain as in your original code

void setup() {
  Serial.begin(115200);
  delay(1500);

  Serial.println("Starting USB Host MIDI");

  // Initialize USBHost
  myusb.begin();

  // MIDI Setup
  midi1.setHandleNoteOn(myNoteOn);
  midi1.setHandleNoteOff(myNoteOff);

  // Audio Setup
  AudioMemory(20);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.4);
  sgtl5000_1.adcHighPassFilterDisable();

  // Initialize oscillators

  //Operators
  
    //LFO
  waveform1.begin(0.2, 2, WAVEFORM_SINE);

  //Carriers

  //VOICE 1
  waveformMod1.begin(1, 2, WAVEFORM_TRIANGLE);
  waveformMod2.begin(1, 2, WAVEFORM_SAWTOOTH);
  waveformMod3.begin(1, 2, WAVEFORM_TRIANGLE);

  //VOICE 2
  waveformMod4.begin(1, 2, WAVEFORM_SQUARE);
  waveformMod5.begin(1, 2, WAVEFORM_TRIANGLE);
  waveformMod6.begin(1, 2, WAVEFORM_SAWTOOTH);

  //VOICE 3
  waveformMod7.begin(1, 2, WAVEFORM_TRIANGLE);
  waveformMod8.begin(1, 2, WAVEFORM_SQUARE);
  waveformMod9.begin(1, 2, WAVEFORM_TRIANGLE);

  //VOICE 4
  waveformMod10.begin(1, 2, WAVEFORM_SAWTOOTH);
  waveformMod11.begin(1, 2, WAVEFORM_TRIANGLE);
  waveformMod12.begin(1, 2, WAVEFORM_SQUARE);

  //VOICE 5
  waveformMod13.begin(1, 2, WAVEFORM_TRIANGLE);
  waveformMod14.begin(1, 2, WAVEFORM_SAWTOOTH);
  waveformMod15.begin(1, 2, WAVEFORM_TRIANGLE);

  //VOICE 6
  waveformMod16.begin(1, 2, WAVEFORM_TRIANGLE);
  waveformMod17.begin(1, 2, WAVEFORM_SAWTOOTH);
  waveformMod18.begin(1, 2, WAVEFORM_TRIANGLE);

  // Initialize mixer gains
  mixer1.gain(0, 0.25);
  mixer1.gain(1, 0.25);
  mixer1.gain(2, 0.25);
  mixer1.gain(3, 0.25);

  mixer2.gain(0, 0.25);
  mixer2.gain(1, 0.25);
  mixer2.gain(2, 0.25);
  mixer2.gain(3, 0.25);

  mixer3.gain(0, 0.25);
  mixer3.gain(1, 0.25);
  mixer3.gain(2, 0.25);
  mixer3.gain(3, 0.25);

  mixer4.gain(0, 0.25);
  mixer4.gain(1, 0.25);
  mixer4.gain(2, 0.25);
  mixer4.gain(3, 0.25);

  mixer5.gain(0, 0.25);
  mixer5.gain(1, 0.25);
  mixer5.gain(2, 0.25);
  mixer5.gain(3, 0.25);
  // Initialize envelopes
  envelope1.attack(20);
  envelope1.release(150);
  envelope2.attack(20);
  envelope2.release(150);
  envelope3.attack(20);
  envelope3.release(150);
  envelope4.attack(20);
  envelope4.release(150);

  filter1.frequency(5000);
  filter1.resonance(0.6);
  filter1.octaveControl(0);

  
  setupVoices();

  // Initialize potentiometer pins
  pinMode(destinationPin, INPUT);
  pinMode(reverbPin, INPUT);
  pinMode(hpResPin, INPUT);
  pinMode(dynamicPin, INPUT);
  pinMode(lpCutPin, INPUT);
  pinMode(echoPin, INPUT);
  pinMode(lpResPin, INPUT);
  pinMode(distortPin, INPUT);
  pinMode(pedalPin, INPUT);
  pinMode(hpCutPin, INPUT);

  // Initialize encoder switch pins
  pinMode(encASw, INPUT_PULLUP);
  pinMode(encBSw, INPUT_PULLUP);
  pinMode(encCSw, INPUT_PULLUP);
  pinMode(encDSw, INPUT_PULLUP);
  
  filter1.frequency(1);
  filter1.resonance(0.7);

  filter2.frequency(1);
  filter2.resonance(0.7);


}

void loop() {
  // Process USB events
  myusb.Task();
  midi1.read();

  checkControls();
  setValues();


}

void myNoteOn(byte channel, byte note, byte velocity) {
  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);
  Serial.println("note on");
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
      waveformMod1.frequency(frequency);
      waveformMod2.frequency(frequency);
      waveformMod3.frequency(frequency);

      envelope1.noteOn();
      break;
    case 1:
      waveformMod4.frequency(frequency);
      waveformMod5.frequency(frequency);
      waveformMod6.frequency(frequency);
      envelope2.noteOn();
      break;
    case 2:
      waveformMod7.frequency(frequency);
      waveformMod8.frequency(frequency);
      waveformMod9.frequency(frequency);

      envelope3.noteOn();
      break;
    case 3:
      waveformMod10.frequency(frequency);
      waveformMod11.frequency(frequency);
      waveformMod12.frequency(frequency);
      envelope4.noteOn();
      break;
    case 4:
      waveformMod13.frequency(frequency);
      waveformMod14.frequency(frequency);
      waveformMod15.frequency(frequency);
      envelope5.noteOn();
      break;
    case 5:
      waveformMod16.frequency(frequency);
      waveformMod17.frequency(frequency);
      waveformMod18.frequency(frequency);
      envelope6.noteOn();
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
    case 4:
      envelope4.noteOff();
      break;
    case 5:
      envelope4.noteOff();
      break;
  }
}

void setValues(){
  //WAVEFORMS TODO

  //AMP MIXER TODO

  //LP FILTER
  filter1.frequency(map(lpCutValue, 0, 1023, 2000, 12000));
  filter1.resonance(map(lpResValue, 0, 1023, 70, 500)/100);

  // //HP FILTER
  filter2.frequency(1);
  filter2.resonance(0.7);

  // filter2.frequency(map(hpCutValue, 0, 1023, 2000, 12000));
  // filter2.resonance(map(hpResValue, 0, 1023, 70, 500)/100);

  // //NOISE TODO
  // //mixer1.gain(4, noise)

  // //DISTORTION
  // distortWetLevel = map(potValue, 0, 1023, 0, 100) / 100.0; // Map to 0.0 - 1.0
  // distortDryLevel = 1.0 - distortWetLevel;  

  // mixer3.gain(0, distortWetLevel); // Dry signal
  // mixer3.gain(1, distortDryLevel); // Wet signal


  // //ECHO
  // echoWetLevel = map(potValue, 0, 1023, 0, 100) / 100.0; // Map to 0.0 - 1.0
  // echoDryLevel = 1.0 - echoWetLevel;  

  // mixer4.gain(0, dryLevel); // Dry signal
  // mixer4.gain(1, wetLevel); // Wet signal


  // //REVERB
  // reverbWetLevel = map(potValue, 0, 1023, 0, 100) / 100.0; // Map to 0.0 - 1.0
  // reverbDryLevel = 1.0 - reverbWetLevel;  

  // mixer5.gain(0, reverbWetLevel); // Dry signal
  // mixer5.gain(1, reverbDryLevel); // Wet signal

 

  //VOLUME

  //DYNAMIC
}

// Function to check all potentiometers and encoders
void checkControls() {
  //Changes Pot Values

  // Potentiometer readings
  destinationValue = 1023 - analogRead(destinationPin);
  reverbValue = 1023 - analogRead(reverbPin);
  hpResValue = 1023 - analogRead(hpResPin);
  dynamicValue = 1023 - analogRead(dynamicPin);
  lpCutValue = 1023 - analogRead(lpCutPin);
  echoValue = 1023 - analogRead(echoPin);
  lpResValue = 1023 - analogRead(lpResPin);
  distortValue = 1023 - analogRead(distortPin);
  pedalValue = 1023 - analogRead(pedalPin);
  hpCutValue = 1023 - analogRead(hpCutPin);
  // Serial.println(lpCutValue);

  // Encoder readings
  long encACurrent = encA.read();
  if (encACurrent > encALast) {
    Serial.println("Encoder A turned clockwise");
  } else if (encACurrent < encALast) {
    Serial.println("Encoder A turned counter-clockwise");
  }
  encALast = encACurrent;

  long encBCurrent = encB.read();
  if (encBCurrent > encBLast) {
    Serial.println("Encoder B turned clockwise");
  } else if (encBCurrent < encBLast) {
    Serial.println("Encoder B turned counter-clockwise");
  }
  encBLast = encBCurrent;

  long encCCurrent = encC.read();
  if (encCCurrent > encCLast) {
    Serial.println("Encoder C turned clockwise");
  } else if (encCCurrent < encCLast) {
    Serial.println("Encoder C turned counter-clockwise");
  }
  encCLast = encCCurrent;

  long encDCurrent = encD.read();
  if (encDCurrent > encDLast) {
    Serial.println("Encoder D turned clockwise");
  } else if (encDCurrent < encDLast) {
    Serial.println("Encoder D turned counter-clockwise");
  }
  encDLast = encDCurrent;
}



