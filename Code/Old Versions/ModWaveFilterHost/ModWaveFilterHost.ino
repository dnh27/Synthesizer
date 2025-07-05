#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <USBHost_t36.h>
#include <Encoder.h>
#include <Adafruit_NeoPixel.h>


// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=384.8571472167969,1516.761962890625
AudioSynthWaveformModulated waveformMod14;  //xy=828.8571472167969,1852.761962890625
AudioSynthWaveformModulated waveformMod17;  //xy=834.8571472167969,2145.761962890625
AudioSynthWaveformModulated waveformMod13;  //xy=836.8571472167969,1763.761962890625
AudioSynthWaveformModulated waveformMod16;  //xy=842.8571472167969,2056.761962890625
AudioSynthWaveformModulated waveformMod15;  //xy=856.8571472167969,1931.761962890625
AudioSynthWaveformModulated waveformMod2;   //xy=864.8571472167969,728.761962890625
AudioSynthWaveformModulated waveformMod7;   //xy=866.8571472167969,1175.761962890625
AudioSynthWaveformModulated waveformMod18;  //xy=862.8571472167969,2224.761962890625
AudioSynthWaveformModulated waveformMod11;  //xy=867.8571472167969,1551.761962890625
AudioSynthWaveformModulated waveformMod1;   //xy=872.8571472167969,640.761962890625
AudioSynthWaveformModulated waveformMod10;  //xy=880.8571472167969,1505.761962890625
AudioSynthWaveformModulated waveformMod3;   //xy=892.8571472167969,807.761962890625
AudioSynthWaveformModulated waveformMod4;   //xy=892.8571472167969,915.761962890625
AudioSynthWaveformModulated waveformMod8;   //xy=895.8571472167969,1237.761962890625
AudioSynthWaveformModulated waveformMod12;  //xy=895.8571472167969,1629.761962890625
AudioSynthWaveformModulated waveformMod9;   //xy=897.8571472167969,1318.761962890625
AudioSynthWaveformModulated waveformMod5;   //xy=921.8571472167969,977.761962890625
AudioSynthWaveformModulated waveformMod6;   //xy=923.8571472167969,1058.761962890625
AudioSynthNoisePink      pink1;          //xy=1030.380989074707,1400.3809518814087
AudioMixer4              mixer11;        //xy=1048.8571472167969,1860.761962890625
AudioMixer4              mixer12;        //xy=1049.8571472167969,2171.761962890625
AudioMixer4              mixer10;        //xy=1072.8571472167969,1568.761962890625
AudioMixer4              mixer9;         //xy=1098.8571472167969,1234.761962890625
AudioMixer4              mixer8;         //xy=1149.8571472167969,1012.761962890625
AudioMixer4              mixer7;         //xy=1195.8571472167969,798.761962890625
AudioEffectEnvelope      envelope5;      //xy=1207.8571472167969,1901.761962890625
AudioEffectEnvelope      envelope6;      //xy=1213.8571472167969,2194.761962890625
AudioEffectEnvelope      envelope4;      //xy=1246.8571472167969,1600.761962890625
AudioEffectEnvelope      envelope3;      //xy=1260.8571472167969,1200.761962890625
AudioEffectEnvelope      envelope13; //xy=1267.8095703125,1492.761962890625
AudioEffectEnvelope      envelope14; //xy=1267.8095703125,1541.33349609375
AudioEffectEnvelope      envelope11; //xy=1272.0952415466309,1395.6190404891968
AudioEffectEnvelope      envelope12; //xy=1272.0952415466309,1444.1905736923218
AudioEffectEnvelope      envelope9;      //xy=1273.238166809082,1277.5239114761353
AudioEffectEnvelope      envelope10; //xy=1273.5238304138184,1337.0476293563843
AudioEffectEnvelope      envelope2;      //xy=1324.8571472167969,1028.761962890625
AudioEffectEnvelope      envelope1;      //xy=1361.8571472167969,906.761962890625
AudioSynthWaveformDc     dc1;            //xy=1437.8571472167969,1969.761962890625
AudioMixer4              mixer5;         //xy=1447.8571472167969,1717.761962890625
AudioMixer4              mixer14;        //xy=1460.3809465680802,1380.3809465680802
AudioMixer4              mixer15;        //xy=1468.9524574279785,1473.2382164001465
AudioMixer4              mixer1;         //xy=1532.8571472167969,1233.761962890625
AudioAmplifier           amp2;           //xy=1618.857177734375,1842.761962890625
AudioMixer4              mixer6;         //xy=1623.8571472167969,1672.761962890625
AudioEffectEnvelope      envelope7;      //xy=1633.8571472167969,1987.761962890625
AudioEffectEnvelope      envelope8;      //xy=1637.8571472167969,2041.761962890625
AudioFilterStateVariable filter2;        //xy=1800.8571472167969,1583.761962890625
AudioFilterStateVariable filter1;        //xy=1823.8571472167969,1745.761962890625
AudioMixer4              mixer13;        //xy=1964.8571472167969,1513.761962890625
AudioEffectDelay         delay1;         //xy=1982.8571472167969,1242.761962890625
AudioMixer4              mixer2;         //xy=1984.8571472167969,1378.761962890625
AudioEffectFreeverb      freeverb1;      //xy=2029.8571472167969,1656.761962890625
AudioMixer4              mixer3;         //xy=2207.857147216797,1561.761962890625
AudioEffectBitcrusher    bitcrusher1;    //xy=2290.857147216797,1473.761962890625
AudioMixer4              mixer4;         //xy=2403.857147216797,1568.761962890625
AudioAmplifier           amp1;           //xy=2521.857147216797,1715.761962890625
AudioOutputI2S           i2s1;           //xy=2585.857147216797,1606.761962890625
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
AudioConnection          patchCord19(waveformMod14, 0, mixer11, 1);
AudioConnection          patchCord20(waveformMod17, 0, mixer12, 1);
AudioConnection          patchCord21(waveformMod13, 0, mixer11, 0);
AudioConnection          patchCord22(waveformMod16, 0, mixer12, 0);
AudioConnection          patchCord23(waveformMod15, 0, mixer11, 2);
AudioConnection          patchCord24(waveformMod2, 0, mixer7, 1);
AudioConnection          patchCord25(waveformMod7, 0, mixer9, 0);
AudioConnection          patchCord26(waveformMod18, 0, mixer12, 2);
AudioConnection          patchCord27(waveformMod11, 0, mixer10, 1);
AudioConnection          patchCord28(waveformMod1, 0, mixer7, 0);
AudioConnection          patchCord29(waveformMod10, 0, mixer10, 0);
AudioConnection          patchCord30(waveformMod3, 0, mixer7, 2);
AudioConnection          patchCord31(waveformMod4, 0, mixer8, 0);
AudioConnection          patchCord32(waveformMod8, 0, mixer9, 1);
AudioConnection          patchCord33(waveformMod12, 0, mixer10, 2);
AudioConnection          patchCord34(waveformMod9, 0, mixer9, 2);
AudioConnection          patchCord35(waveformMod5, 0, mixer8, 1);
AudioConnection          patchCord36(waveformMod6, 0, mixer8, 2);
AudioConnection          patchCord37(pink1, envelope9);
AudioConnection          patchCord38(pink1, envelope10);
AudioConnection          patchCord39(pink1, envelope11);
AudioConnection          patchCord40(pink1, envelope12);
AudioConnection          patchCord41(pink1, envelope13);
AudioConnection          patchCord42(pink1, envelope14);
AudioConnection          patchCord43(mixer11, envelope5);
AudioConnection          patchCord44(mixer12, envelope6);
AudioConnection          patchCord45(mixer10, envelope4);
AudioConnection          patchCord46(mixer9, envelope3);
AudioConnection          patchCord47(mixer8, envelope2);
AudioConnection          patchCord48(mixer7, envelope1);
AudioConnection          patchCord49(envelope5, 0, mixer5, 1);
AudioConnection          patchCord50(envelope6, 0, mixer5, 2);
AudioConnection          patchCord51(envelope4, 0, mixer5, 0);
AudioConnection          patchCord52(envelope3, 0, mixer1, 2);
AudioConnection          patchCord53(envelope13, 0, mixer15, 1);
AudioConnection          patchCord54(envelope14, 0, mixer15, 2);
AudioConnection          patchCord55(envelope11, 0, mixer14, 2);
AudioConnection          patchCord56(envelope12, 0, mixer15, 0);
AudioConnection          patchCord57(envelope9, 0, mixer14, 0);
AudioConnection          patchCord58(envelope10, 0, mixer14, 1);
AudioConnection          patchCord59(envelope2, 0, mixer1, 1);
AudioConnection          patchCord60(envelope1, 0, mixer1, 0);
AudioConnection          patchCord61(dc1, envelope7);
AudioConnection          patchCord62(dc1, envelope8);
AudioConnection          patchCord63(mixer5, 0, mixer6, 1);
AudioConnection          patchCord64(mixer14, 0, mixer6, 2);
AudioConnection          patchCord65(mixer15, 0, mixer6, 3);
AudioConnection          patchCord66(mixer1, 0, mixer6, 0);
AudioConnection          patchCord67(amp2, 0, filter1, 0);
AudioConnection          patchCord68(mixer6, amp2);
AudioConnection          patchCord69(envelope7, 0, filter2, 1);
AudioConnection          patchCord70(envelope8, 0, filter1, 1);
AudioConnection          patchCord71(filter2, 2, delay1, 0);
AudioConnection          patchCord72(filter2, 2, mixer13, 1);
AudioConnection          patchCord73(filter1, 0, filter2, 0);
AudioConnection          patchCord74(mixer13, 0, mixer3, 1);
AudioConnection          patchCord75(mixer13, freeverb1);
AudioConnection          patchCord76(delay1, 0, mixer2, 0);
AudioConnection          patchCord77(delay1, 1, mixer2, 1);
AudioConnection          patchCord78(delay1, 2, mixer2, 2);
AudioConnection          patchCord79(delay1, 3, mixer2, 3);
AudioConnection          patchCord80(mixer2, 0, mixer13, 0);
AudioConnection          patchCord81(freeverb1, 0, mixer3, 0);
AudioConnection          patchCord82(mixer3, 0, mixer4, 1);
AudioConnection          patchCord83(mixer3, bitcrusher1);
AudioConnection          patchCord84(bitcrusher1, 0, mixer4, 0);
AudioConnection          patchCord85(mixer4, amp1);
AudioConnection          patchCord86(amp1, 0, i2s1, 0);
AudioConnection          patchCord87(amp1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1971.8571472167969,1108.761962890625
// GUItool: end automatically generated code


// POTI DEFINITIONS
#define destinationPin A0
#define reverbPin A1
#define noisePin A2
#define dynamicPin A3
#define volumePin A10
#define lpCutPin A11
#define echoPin A12
#define hpResPin A13
#define lpResPin A14
#define distortPin A15
#define pedalPin A16
#define hpCutPin A17

//ENCODER DEFINITIONS
#define encDA 3
#define encDB 2
// #define encDSw 4

#define encAA 6
#define encAB 5
// #define encASw 8

#define encBA 11
#define encBB 10
// #define encCSw 10

#define encCA 28
#define encCB 12
// #define encDSw 29

#define ledRingA 32
#define ledRingB 31
#define ledRingC 30
#define ledRingD 4

// Define the number of LEDs in each ring
#define NUM_LEDS 12 // Adjust this based on the number of LEDs in your rings

const int NUM_ENCODERS = 4;   // Number of encoders
const int NUM_POSITIONS = 11; // Number of detent positions
const int NUM_VOICES = 6; // Number of Voices
const int MIN_VALUE = 0;      // Minimum value for each Encoder position
const int MAX_VALUE = 100;    // Maximum value for each Encoder position

int lastPotPosition = -1;        // Track the last detected position

int positionThresholds[NUM_POSITIONS + 1] = { 
  0, 27, 115, 234, 347, 454, 559, 669, 786, 909, 996, 1024
};


// Value array: Each row corresponds to a potentiometer position, each column to an encoder
int values[NUM_POSITIONS][NUM_ENCODERS] = {0};
long encoderLast[NUM_ENCODERS] = {0, 0, 0, 0};

Adafruit_NeoPixel ledRings[NUM_ENCODERS] = {
  Adafruit_NeoPixel(NUM_LEDS, ledRingA, NEO_GRB + NEO_KHZ800),
  Adafruit_NeoPixel(NUM_LEDS, ledRingB, NEO_GRB + NEO_KHZ800),
  Adafruit_NeoPixel(NUM_LEDS, ledRingC, NEO_GRB + NEO_KHZ800),
  Adafruit_NeoPixel(NUM_LEDS, ledRingD, NEO_GRB + NEO_KHZ800),
};

// Adafruit_NeoPixel ringA(NUM_LEDS, ledRingA, NEO_GRB + NEO_KHZ800);
// Adafruit_NeoPixel ringB(NUM_LEDS, ledRingB, NEO_GRB + NEO_KHZ800);
// Adafruit_NeoPixel ringC(NUM_LEDS, ledRingC, NEO_GRB + NEO_KHZ800);
// Adafruit_NeoPixel ringD(NUM_LEDS, ledRingD, NEO_GRB + NEO_KHZ800);

int voiceAttack = 0;
int voiceDecay = 0;
int voiceSustain = 0;
int voiceRelease = 0;

int noiseAttack = 0;
int noiseDecay = 0;
int noiseSustain = 0;
int noiseRelease = 0;
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
int volumeValue = 0;
int noiseValue = 0;


int destinationPos = 0;
int pedalPos = 0;

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

//REVERB
float reverbWetLevel = 0.5;
float reverbDryLevel = 0.5;
float revDamping = 0; // 0 - 1
float revRoomSize = 0; // 0 - 1

float echoWetLevel = 0.5;
float echoDryLevel = 0.5;

// float noiseWetLevel = 0.5;
// float noiseDryLevel = 0.5;

// Keep track of voice states
struct Voice {
  bool active;
  byte note;
  unsigned long startTime;
};

Voice voices[NUM_VOICES];

void setupVoices() {
  for (int i = 0; i < NUM_VOICES; i++) {
    voices[i] = {false, 0, 0};
  }
}


USBHost myusb;         // Create USBHost object
MIDIDevice midi1(myusb); // Create a MIDI device object on USBHost


// Define constants for the number of voices

// Arrays for waveforms, envelopes, and mixers
AudioSynthWaveformModulated* waveforms[3][NUM_VOICES] = {
  {&waveformMod1, &waveformMod4, &waveformMod7, &waveformMod10, &waveformMod13, &waveformMod16},
  {&waveformMod2, &waveformMod5, &waveformMod8, &waveformMod11, &waveformMod14, &waveformMod17},
  {&waveformMod3, &waveformMod6, &waveformMod9, &waveformMod12, &waveformMod15, &waveformMod18}
};

AudioEffectEnvelope* envelopes[NUM_VOICES] = {
  &envelope1, &envelope2, &envelope3, &envelope4, &envelope5, &envelope6
};

AudioMixer4* mixers[NUM_VOICES] = {
  &mixer7, &mixer8, &mixer9, &mixer10, &mixer11, &mixer12
};

// Function to set waveform type for each group
void setWaveformType(int groupIndex, int waveformType, int frequency = 1) {
  if (groupIndex < 0 || groupIndex >= 3) return; // Validate the group index
  for (int voice = 0; voice < NUM_VOICES; voice++) {
    waveforms[groupIndex][voice]->begin(1, frequency, waveformType);
  }
}

// Function to set envelope parameters
void setEnvelopes(float attack, float decay, float sustain, float release) {
  // Only update parameters that are not -1 (i.e., the ones passed by the handleEncoder function)
  if (attack >= 0) voiceAttack = attack;
  if (decay >= 0) voiceDecay = decay;
  if (sustain >= 0) voiceSustain = sustain;
  if (release >= 0) voiceRelease = release;

  for (int voice = 0; voice < NUM_VOICES; voice++) {
    envelopes[voice]->attack(voiceAttack);
    envelopes[voice]->decay(voiceDecay);
    envelopes[voice]->sustain(voiceSustain);
    envelopes[voice]->release(voiceRelease);
  }
}

// Function to set the gain for a specific waveform across all voices
void setMixerGains(int waveformChannel, float gain) {
  if (waveformChannel < 0 || waveformChannel >= 3) return; // Validate the waveform channel (0, 1, or 2)

  // Set the gain for the specified waveform channel across all voices
  for (int voice = 0; voice < NUM_VOICES; voice++) {
    mixers[voice]->gain(waveformChannel, gain);  // Set gain for the specified waveform channel for each voice
  }
}
// Audio object declarations remain as in your original code

void setup() {

  

  // Audio Setup
  AudioMemory(300);
  sgtl5000_1.enable();
  sgtl5000_1.lineOutLevel(25);  // Set output to 1.62V p-p
  //sgtl5000_1.adcHighPassFilterDisable();
  
  delay(500);

  //Serial.println("Starting USB Host MIDI");

  // Initialize USBHost
  myusb.begin();
  delay(500);

  // MIDI Setup
  midi1.setHandleNoteOn(myNoteOn);
  midi1.setHandleNoteOff(myNoteOff);

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

  // Initialize LED rings
  for (int i = 0; i < NUM_ENCODERS; i++) {
    ledRings[i].begin();
    ledRings[i].show();  // Turn off all LEDs initially
  }

  // Initialize oscillators
  
  //Operators
  
    //LFO
  waveform1.begin(0.1, 0, WAVEFORM_SINE);

  // Carriers
  setMixerGains(0, 0.25);
  setMixerGains(1, 0.25);
  setMixerGains(2, 0.25);


  for (int voice = 0; voice < NUM_VOICES; voice++) {
    for (int groupIndex = 0; groupIndex < 3; groupIndex++){
    waveforms[groupIndex][voice]->frequencyModulation(0.05);
    }
  }

  setWaveformType(0, WAVEFORM_SINE);
  setWaveformType(1, WAVEFORM_SAWTOOTH);
  setWaveformType(2, WAVEFORM_TRIANGLE);

  // Initialize mixer gains
  // values[7][0] = 50;
  // values[7][1] = 50;
  // values[7][2] = 50;

  amp1.gain(1);


  //ENVELOPE VOICE MIXERS
  mixer1.gain(0, 0.25);
  mixer1.gain(1, 0.25);
  mixer1.gain(2, 0.25);
  // mixer1.gain(3, 0.25);

  mixer5.gain(0, 0.25);
  mixer5.gain(1, 0.25);
  mixer5.gain(2, 0.25);
  // mixer5.gain(3, 0.25);

  //GROUP VOICE MIXER
  mixer6.gain(0, 0.35);
  mixer6.gain(1, 0.35);
  //noise gain
  mixer6.gain(2, 0.15);
  mixer6.gain(3, 0.15);

  //DELAY MIXER
  mixer2.gain(0, 0.35);
  mixer2.gain(1, 0.3);
  mixer2.gain(2, 0.25);
  mixer2.gain(3, 0.2);

  //REVERB DRY/WET MIXER
  mixer3.gain(0, 0.25);
  mixer3.gain(1, 0.25);
  mixer3.gain(2, 0.25);
  mixer3.gain(3, 0.25);
  
  //DISTORTION DRY/WET MIXER
  mixer4.gain(0, 0.25);
  mixer4.gain(1, 0.25);
  mixer4.gain(2, 0.25);
  mixer4.gain(3, 0.25);
  
  //ECHO DRY/WET MIXER
  mixer13.gain(0, 0.5);
  mixer13.gain(1, 0.5);

  //NOISE MIXER
  mixer14.gain(0, 0.25);
  mixer14.gain(1, 0.25);
  mixer14.gain(2, 0.25);
  // mixer1.gain(3, 0.25);

  mixer15.gain(0, 0.25);
  mixer15.gain(1, 0.25);
  mixer15.gain(2, 0.25);

  // Attenuate signal to reduce Noise
  amp2.gain(0.1);

  // Initialize envelopes
  setEnvelopes(100, 100, 100, 300);


  
  setupVoices();

 



  //EFFECTS INIT SETTINGS
  filter1.frequency(12000);
  filter1.resonance(0.7);

  filter2.frequency(1);
  filter2.resonance(0.7);

  delay1.delay(0, 200);
  delay1.delay(1, 300);
  delay1.delay(2, 400);
  delay1.delay(3, 500);
  
  bitcrusher1.bits(8);
  bitcrusher1.sampleRate(44100); //pass through

  freeverb1.damping(0.5);
  freeverb1.roomsize(0.5);
  // filter3.frequency(10000);

  //Pink Noise
  pink1.amplitude(1);


}

void setEnvelopesAcrossVoices(float attack, float decay, float sustain, float release) {
  AudioEffectEnvelope* noiseEnvelopes[NUM_VOICES] = {
    &envelope9, &envelope10, &envelope11, &envelope12, &envelope13, &envelope14
  };

  // Only update parameters that are not -1 (i.e., the ones passed by the handleEncoder function)
  if (attack >= 0) noiseAttack = attack;
  if (decay >= 0) noiseDecay = decay;
  if (sustain >= 0) noiseSustain = sustain;
  if (release >= 0) noiseRelease = release;

  for (int i = 0; i < NUM_VOICES; i++) {
    noiseEnvelopes[i]->attack(noiseAttack);
    noiseEnvelopes[i]->decay(noiseDecay);
    noiseEnvelopes[i]->sustain(noiseSustain);
    noiseEnvelopes[i]->release(noiseRelease);
  }
}


// Helper function to light up a ring in a single color
void lightUpRing(Adafruit_NeoPixel &ring, uint8_t red, uint8_t green, uint8_t blue) {
  for (int i = 0; i < NUM_LEDS; i++) {
    ring.setPixelColor(i, ring.Color(red, green, blue));
  }
  ring.show();
}

int determinePosition(int analogValue) {
  for (int i = 0; i < NUM_POSITIONS; i++) {
    if (analogValue >= positionThresholds[i] && analogValue < positionThresholds[i + 1]) {
      return i;
    }
  }
  return -1; // Return -1 if no position is matched (shouldn't happen with proper thresholds)
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
  
  // Calculate dynamic scaling factor based on dynamicValue (0 to 1)
  float sensitivity = dynamicValue / 100.0f;  // Scale dynamicValue to a range of 0.0 to 1.0
  
  // Blend between constant gain (1.0) and velocity-based gain
  float gain = (1.0f - sensitivity) + (sensitivity * (1.0f - (velocity / 127.0f)));  // Interpolates correctly to ensure higher velocity = higher gain
  gain = gain / 4.0f;  // Keep final output level reasonable
  // Debug output
  Serial.print("Original velocity: ");
  Serial.print(velocity);
  Serial.print(", Calculated gain: ");
  Serial.println(gain);

  AudioNoInterrupts();

  // Check for available voices
  for (int i = 0; i < NUM_VOICES; i++) {
    if (!voices[i].active) {
      assignVoice(i, note, frequency, gain);
      AudioInterrupts();
      return;
    }
  }

  // All voices are active, find the oldest one to steal
  unsigned long oldestTime = millis();
  int oldestVoiceIndex = 0;
  for (int i = 0; i < NUM_VOICES; i++) {
    if (voices[i].startTime < oldestTime) {
      oldestTime = voices[i].startTime;
      oldestVoiceIndex = i;
    }
  }

  voices[oldestVoiceIndex].active = false;
  assignVoice(oldestVoiceIndex, note, frequency, gain);

  AudioInterrupts();
}

void myNoteOff(byte channel, byte note, byte velocity) {
  for (int i = 0; i < NUM_VOICES; i++) {
    if (voices[i].active && voices[i].note == note) {
      voices[i].active = false;
      stopVoice(i);
      break;
    }
  }
  

}


float voiceFrequencies[NUM_VOICES] = {0};  // Base frequencies for each voice

void assignVoice(int voiceIndex, byte note, float frequency, float gain) {
  voices[voiceIndex].note = note;
  voices[voiceIndex].startTime = millis();
  voices[voiceIndex].active = true;

  // Save base frequency for detune calculations
  voiceFrequencies[voiceIndex] = frequency;

  switch (voiceIndex) {
    case 0:
      mixer1.gain(0, gain);
      waveformMod1.frequency(frequency);
      waveformMod2.frequency(frequency);
      waveformMod3.frequency(frequency);
      envelope1.noteOn();
      envelope9.noteOn();  // Pink noise envelope
      break;
    case 1:

      mixer1.gain(1, gain);
      waveformMod4.frequency(frequency);
      waveformMod5.frequency(frequency);
      waveformMod6.frequency(frequency);
      envelope2.noteOn();
      envelope10.noteOn();  // Pink noise envelope
      break;
    case 2:
      mixer1.gain(2, gain);
      waveformMod7.frequency(frequency);
      waveformMod8.frequency(frequency);
      waveformMod9.frequency(frequency);
      envelope3.noteOn();
      envelope11.noteOn();  // Pink noise envelope
      break;
    case 3:
      mixer5.gain(0, gain);

      waveformMod10.frequency(frequency);
      waveformMod11.frequency(frequency);
      waveformMod12.frequency(frequency);
      envelope4.noteOn();
      envelope12.noteOn();  // Pink noise envelope
      break;
    case 4:
      mixer5.gain(1, gain);
      waveformMod13.frequency(frequency);
      waveformMod14.frequency(frequency);
      waveformMod15.frequency(frequency);
      envelope5.noteOn();
      envelope13.noteOn();  // Pink noise envelope
      break;
    case 5:
      mixer5.gain(2, gain);

      waveformMod16.frequency(frequency);
      waveformMod17.frequency(frequency);
      waveformMod18.frequency(frequency);
      envelope6.noteOn();
      envelope14.noteOn();  // Pink noise envelope
      break;
  }
}
void setVoiceFrequencies(int voiceIndex, float frequency) {
  switch (voiceIndex) {
    case 0:
      waveformMod1.frequency(frequency);
      waveformMod2.frequency(frequency);
      waveformMod3.frequency(frequency);
      break;
    case 1:
      waveformMod4.frequency(frequency);
      waveformMod5.frequency(frequency);
      waveformMod6.frequency(frequency);
      break;
    case 2:
      waveformMod7.frequency(frequency);
      waveformMod8.frequency(frequency);
      waveformMod9.frequency(frequency);
      break;
    case 3:
      waveformMod10.frequency(frequency);
      waveformMod11.frequency(frequency);
      waveformMod12.frequency(frequency);
      break;
    case 4:
      waveformMod13.frequency(frequency);
      waveformMod14.frequency(frequency);
      waveformMod15.frequency(frequency);
      break;
    case 5:
      waveformMod16.frequency(frequency);
      waveformMod17.frequency(frequency);
      waveformMod18.frequency(frequency);
      break;
  }
}


void stopVoice(int voiceIndex) {
  switch (voiceIndex) {
    case 0:
      envelope1.noteOff();

      //pink noise
      envelope9.noteOff();
      break;
    case 1:
      envelope2.noteOff();

      //pink noise
      envelope10.noteOff();
      break;
    case 2:
      envelope3.noteOff();

      //pink noise
      envelope11.noteOff();
      break;
    case 3:
      envelope4.noteOff();

      //pink noise
      envelope12.noteOff();
      break;
    case 4:
      envelope5.noteOff();

      //pink noise
      envelope13.noteOff();
      break;
    case 5:
      envelope6.noteOff();

      //pink noise
      envelope14.noteOff();
      break;
  }
}

void setValues(){

  AudioNoInterrupts();

 //Destination
  
  destinationPos = determinePosition(destinationValue);
 
  handleEncoders(destinationPos);


  //LP FILTER
  filter1.frequency(20000-map(lpCutValue, 0, 1023, 50, 20000));
  filter1.resonance(map(lpResValue, 0, 1023, 72, 500)/100);

  //HP FILTER
  filter2.frequency(map(hpCutValue, 0, 1023, 0, 10000));
  filter2.resonance(map(hpResValue, 0, 1023, 72, 500)/100);

  // //NOISE TODO
  mixer6.gain(2, map(noiseValue, 0, 1023, 0, 100)/100.0f);
  mixer6.gain(3, map(noiseValue, 0, 1023, 0, 100)/100.0f);

  //DISTORTION
  distortWetLevel = map(distortValue, 0, 1023, 0, 100) / 100.0; // Map to 0.0 - 1.0
  distortDryLevel = 1.0 - distortWetLevel;  


  mixer4.gain(0, distortWetLevel); 
  mixer4.gain(1, distortDryLevel);
  

  //ECHO
  echoWetLevel = map(echoValue, 0, 1023, 0, 100) / 100.0; // Map to 0.0 - 1.0
  echoDryLevel = 1.0 - echoWetLevel;  
  // Ensure the sum of wet and dry levels doesn't exceed 1.0
  float normalizedWetLevel = echoWetLevel * 0.8;  // Limit max wet level slightly
  float normalizedDryLevel = echoDryLevel * 0.8;  // Limit max dry level slightly

  // Ensure there's always some dry signal even at 100% wet
  float minDrySignal = 0.1;  // 10% dry signal always present
  float finalDryLevel = max(normalizedDryLevel, minDrySignal);

  // Adjust mixer gains
  mixer13.gain(0, normalizedWetLevel);  // Wet signal
  mixer13.gain(1, finalDryLevel);       // Dry signal




  //REVERB
  reverbWetLevel = map(reverbValue, 0, 1023, 0, 100) / 100.0; // Map to 0.0 - 1.0
  reverbDryLevel = 1.0 - reverbWetLevel;  

  mixer3.gain(0, reverbWetLevel); 
  mixer3.gain(1, reverbDryLevel/2); 
  mixer3.gain(2, reverbDryLevel/2); 

  freeverb1.damping(revDamping);
  freeverb1.roomsize(revRoomSize);

  //VOLUME
  amp1.gain((volumeValue)/40.0f);

  //DYNAMIC

  AudioInterrupts();
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
  volumeValue = 1023 - analogRead(volumePin);
  noiseValue = 1023 - analogRead(noisePin);



  
}
// Function to constrain values within a range
int clampValue(int value, int minVal, int maxVal) {
  if (value < minVal) return minVal;
  if (value > maxVal) return maxVal;
  return value;
}

// Track round trips for each encoder
int roundTrips[NUM_ENCODERS] = {0, 0, 0, 0};
const int BRIGHTNESS_STEP = 5;  // Brightness increase per round trip
const int MAX_BRIGHTNESS = 100;  // Limit brightness for testing

void updateLedRing(int encoderIndex, int value, int currentPosition) {
  Adafruit_NeoPixel* ring = &ledRings[encoderIndex];

  int numLedsToLight = map(value, 0, 100, 0, NUM_LEDS);
  int brightnessLevel = min(20 + map(value, 0, 100, 0, 30), 50);  // Capped at 50

  uint32_t color;

  // Set color based on the current pot position
  switch (currentPosition) {
    case 8:  // Mix - Red
      color = ring->Color(brightnessLevel, 0, 0);
      break;
    case 7:  // Amplitude Envelope - Blue
      color = ring->Color(0, 0, brightnessLevel);
      break;
    case 9:  // Waveforms - Green
      color = ring->Color(0, brightnessLevel, 0);
      break;
    case 4:  // Delay - Yellow
      color = ring->Color(brightnessLevel, brightnessLevel, 0);
      break;
    case 3:  // Reverb - Cyan
      color = ring->Color(0, brightnessLevel, brightnessLevel);
      break;
    case 5:  // Low-pass Filter Envelope - Magenta
      color = ring->Color(brightnessLevel, 0, brightnessLevel);
      break;
    case 0:  // Pink Noise Envelope - Orange
      color = ring->Color(brightnessLevel, brightnessLevel / 2, 0);
      break;
    default:  // Default to white if undefined
      color = ring->Color(brightnessLevel, brightnessLevel, brightnessLevel);
      break;
  }

  // Light up the ring according to the current value
  for (int i = 0; i < NUM_LEDS; i++) {
    if (i < numLedsToLight) {
      ring->setPixelColor(i, color);  // Show the color
    } else {
      ring->setPixelColor(i, 0);  // Turn off remaining LEDs
    }
  }

  ring->show();  // Update the ring
}


void handleEncoders(int currentPosition) {
  long encCurrent[NUM_ENCODERS];
  Encoder* encoders[NUM_ENCODERS] = {&encA, &encB, &encC, &encD};  // Corrected the encoder order based on the ring mapping
  // Base detune is zero until the encoder is moved
  if (currentPosition != lastPotPosition) {
    // Force an update of the LED rings to reset the colors
    for (int i = 0; i < NUM_ENCODERS; i++) {
      updateLedRing(i, values[currentPosition][i], currentPosition);
    }
    lastPotPosition = currentPosition;  // Update last position
  }
  // Read all encoders
  for (int i = 0; i < NUM_ENCODERS; i++) {
    encCurrent[i] = encoders[i]->read();

    if (encCurrent[i] != encoderLast[i]) {
      int delta = encCurrent[i] - encoderLast[i];  // Difference in encoder position
      int adjustment = delta > 0 ? 1 : -1;  // Determine adjustment (clockwise or counterclockwise)

      switch (currentPosition) {
        case 0: {  // Pink noise envelope
          values[currentPosition][i] += adjustment;
          values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);

          float envelopeValue = map(values[currentPosition][i], 0, 100, 0, 1000);  // 0 to 1000 ms (attack, decay, release), sustain (0 to 1)

          // Corrected ADSR order (Attack -> Decay -> Sustain -> Release)
          switch (i) {
            case 2:  // Encoder C (Attack)
              setEnvelopesAcrossVoices(envelopeValue, -1, -1, -1);  // Adjust attack
              // //Serial.print("Set pink noise envelope attack to: ");
              break;
            case 0:  // Encoder A (Decay)
              setEnvelopesAcrossVoices(-1, envelopeValue, -1, -1);  // Adjust decay
              // ////Serial.print("Set pink noise envelope decay to: ");
              break;
            case 1:  // Encoder B (Sustain)
              envelopeValue = envelopeValue / 100.0f;  // Convert to 0 to 1
              setEnvelopesAcrossVoices(-1, -1, envelopeValue, -1);  // Adjust sustain
              ////Serial.print("Set pink noise envelope sustain to: ");
              break;
            case 3:  // Encoder D (Release)
              setEnvelopesAcrossVoices(-1, -1, -1, envelopeValue);  // Adjust release
              ////Serial.print("Set pink noise envelope release to: ");
              break;
          }

          ////Serial.println(envelopeValue);  // Debug output
          updateLedRing(i, values[currentPosition][i], currentPosition);  // Show progress on LED ring
          break;
        }


        case 3:  // Reverb control
          if (i == 0) {
            // Encoder 0 adjusts damping
            values[currentPosition][i] += adjustment;  // Adjust the damping value
            values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp between 0 and 100

            float dampingValue = values[currentPosition][i] / 100.0;  // Scale to 0.0 - 1.0
            freeverb1.damping(dampingValue);  // Set damping value

            // Debug output for Serial Monitor
            ////Serial.print("Set reverb damping to: ");
            ////Serial.println(dampingValue);

            // Update the LED ring progress
            updateLedRing(i, values[currentPosition][i], currentPosition);  // Show progress on LED ring
          } else if (i == 1) {
            // Encoder 1 adjusts room size
            values[currentPosition][i] += adjustment;  // Adjust the room size value
            values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp between 0 and 100

            float roomsizeValue = values[currentPosition][i] / 100.0;  // Scale to 0.0 - 1.0
            freeverb1.roomsize(roomsizeValue);  // Set room size value

            // Debug output for Serial Monitor
            //Serial.print("Set reverb room size to: ");
            //Serial.println(roomsizeValue);

            // Update the LED ring progress
            updateLedRing(i, values[currentPosition][i], currentPosition);  // Show progress on LED ring
          }
          break;
        case 4: { // Delay time adjustment
          values[currentPosition][i] += adjustment;  // Increment or decrement the delay time
          values[currentPosition][i] = clampValue(values[currentPosition][i], 100, 1000);  // Clamp between 100 ms and 1000 ms

          delay1.delay(i, values[currentPosition][i]);  // Set the delay for this tap

          // Debug output for Serial Monitor
          //Serial.print("Set delay time for channel ");
          //Serial.print(i);
          //Serial.print(" to: ");
          //Serial.print(values[currentPosition][i]);
          //Serial.println(" ms");

          // Update the LED ring progress
          int progress = map(values[currentPosition][i], 100, 1000, 0, 100);  // Map delay to 0-100
          updateLedRing(i, progress, currentPosition);  // Call updateLedRing with the correct progress
          break;
        }
        case 7: {  // Amplitude envelope
          values[currentPosition][i] += adjustment;  // Increment or decrement the value
          values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp to 0-100

          float envelopeValue;  // Declare the variable outside of inner switch
          if (i == 1) {  // Sustain
            envelopeValue = values[currentPosition][i] / 100.0f;  // Sustain: 0 to 1
          } else {
            envelopeValue = map(values[currentPosition][i], 0, 100, 0, 1000);  // Attack/Decay/Release: 0 to 1000 ms
          }

          // Corrected ADSR order (Attack -> Decay -> Sustain -> Release)
          switch (i) {
            case 2:  // Encoder C (Attack)
              setEnvelopes(envelopeValue, -1, -1, -1);  // Adjust attack
              //Serial.print("Set amplitude envelope attack to: ");
              break;
            case 0:  // Encoder A (Decay)
              setEnvelopes(-1, envelopeValue, -1, -1);  // Adjust decay
              //Serial.print("Set amplitude envelope decay to: ");
              break;
            case 1:  // Encoder B (Sustain)
              setEnvelopes(-1, -1, envelopeValue, -1);  // Adjust sustain
              //Serial.print("Set amplitude envelope sustain to: ");
              break;
            case 3:  // Encoder D (Release)
              setEnvelopes(-1, -1, -1, envelopeValue);  // Adjust release
              //Serial.print("Set amplitude envelope release to: ");
              break;
          }

          //Serial.println(envelopeValue);  // Debug output
          updateLedRing(i, values[currentPosition][i], currentPosition);  // Show progress on LED ring
          break;
        }


        case 8: {  // Waveform modulation mix (also wrapped in braces)
          if (i <= 2) {  // Encoders 0, 1, 2 adjust the mix
            values[currentPosition][i] += adjustment;  // Increment or decrement the value
            values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp to 0-100

            float gainValue = values[currentPosition][i] / 400.0;  // Convert to 0.0 - 0.25 range
            setMixerGains(i, gainValue);  // Adjust the mixer gain for this channel

            // Debug output for Serial Monitor
            //Serial.print("Set mixer gain for channel ");
            //Serial.print(i);
            //Serial.print(" to: ");
            //Serial.println(gainValue);

            updateLedRing(i, values[currentPosition][i], currentPosition);  // Show progress on LED ring
          } else if (i == 3) {  // Encoder 3 adjusts LFO frequency
            values[currentPosition][i] += adjustment;  // Increment or decrement the value
            values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp to 0-100

            float lfoFrequency = map(values[currentPosition][i], 0, 100, 0.1, 10.0);  // Map to 0.1 - 10 Hz
            waveform1.frequency(lfoFrequency);  // Adjust the LFO frequency

            // Debug output for Serial Monitor
            //Serial.print("Set LFO frequency to: ");
            //Serial.println(lfoFrequency);

            updateLedRing(i, values[currentPosition][i], currentPosition);  // Show progress on LED ring
          }
          break;
        }
        case 9:  // Waveform type selection and frequency modulation
          values[currentPosition][i] += adjustment;  // Increment or decrement the value
          values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp to 0 - 100

          if (i == 3) {  // Encoder 3 adjusts frequency modulation
            float freqModValue = values[currentPosition][i] / 400.0f;  // Convert to 0.0 - 0.1 range for subtle modulation
            for (int voice = 0; voice < NUM_VOICES; voice++) {
              for (int groupIndex = 0; groupIndex < 3; groupIndex++) {
                waveforms[groupIndex][voice]->frequencyModulation(freqModValue);  // Set frequency modulation
              }
            }

            // Debug output
            Serial.print("Set frequency modulation to: ");
            Serial.println(freqModValue);

            // Update the LED ring progress for encoder 3
            updateLedRing(i, values[currentPosition][i], currentPosition);
          } else {  // Encoders 0, 1, 2 change waveform types
            if (values[currentPosition][i] % 25 == 0) {  // Change waveform every 25 steps
              int waveformIndex = values[currentPosition][i] / 25;  // Divide by 25 to get a value between 0 and 4
              waveformIndex = clampValue(waveformIndex, 0, 4);  // Clamp to 0 - 4

              switch (waveformIndex) {
                case 0:
                  setWaveformType(i, WAVEFORM_SINE);  // Sine wave
                  break;
                case 1:
                  setWaveformType(i, WAVEFORM_TRIANGLE);  // Triangle wave
                  break;
                case 2:
                  setWaveformType(i, WAVEFORM_SAWTOOTH);  // Sawtooth wave
                  break;
                case 3:
                  setWaveformType(i, WAVEFORM_SQUARE);  // Square wave
                  break;
                case 4:
                  setWaveformType(i, WAVEFORM_SAWTOOTH_REVERSE);  // Reverse sawtooth wave
                  break;
              }

              // Debug output for waveform change
              Serial.print("Set waveform type for encoder ");
              Serial.print(i);
              Serial.print(" to: ");
              Serial.println(waveformIndex);

              // Update the LED ring progress for encoders 0, 1, 2
              updateLedRing(i, values[currentPosition][i], currentPosition);
            }
          }
          break;


        case 10: {  // Detune adjustment
          float detuneHz;  // Declare variable outside to avoid crossing initialization issue

          values[currentPosition][i] += adjustment;  // Increment or decrement the value
          values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp to 0-100

          detuneHz = map(values[currentPosition][i], 0, 100, 0, 50) / 10.0f;  // Map to 0.0 - 5.0 Hz for subtle detune

          // Update frequencies for each voice (except the last 2 voices)
          if (i < NUM_VOICES - 2) {
            float detunedFrequency = voiceFrequencies[i] + detuneHz;  // Add detune to the base frequency
            setVoiceFrequencies(i, detunedFrequency);  // Apply detuned frequency across waves of this voice
          }

          // Update the LED ring progress
          updateLedRing(i, values[currentPosition][i], currentPosition);  // Show detune progress on LED ring

          // Debug output
          Serial.print("Encoder ");
          Serial.print(i);
          Serial.print(" adjusted detune to: ");
          Serial.print(detuneHz);
          Serial.println(" Hz");
          break;
        }


        default: {
          // Handle other positions if needed
          //Serial.print("Encoder ");
          //Serial.print(i);
          //Serial.print(" adjusted at position ");
          //Serial.println(currentPosition);
          break;
        }
      }

      encoderLast[i] = encCurrent[i];  // Update the last position
    }
  }
}


