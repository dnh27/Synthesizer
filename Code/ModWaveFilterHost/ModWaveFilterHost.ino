#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <USBHost_t36.h>
#include <Encoder.h>
#include <Adafruit_NeoPixel.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=745,1466.25
AudioSynthWaveformModulated waveformMod14; //xy=1189.9999817439486,1802.2619116646902
AudioSynthWaveformModulated waveformMod13; //xy=1197.1429271697998,1713.6905975341797
AudioSynthWaveformModulated waveformMod17; //xy=1195.9166077205111,2095.29755619594
AudioSynthWaveformModulated waveformMod16;  //xy=1203.0595531463623,2006.7262420654297
AudioSynthWaveformModulated waveformMod15; //xy=1217.6785488128662,1881.0119552612305
AudioSynthWaveformModulated waveformMod2;   //xy=1225.8690002986361,678.7260840279714
AudioSynthWaveformModulated waveformMod7; //xy=1227.75,1125
AudioSynthWaveformModulated waveformMod18; //xy=1223.5951747894287,2174.0475997924805
AudioSynthWaveformModulated waveformMod11; //xy=1228.7499989100863,1501.0119574410573
AudioSynthWaveformModulated waveformMod1;   //xy=1233.0119457244873,590.1547698974609
AudioSynthWaveformModulated waveformMod10; //xy=1241.3474884033203,1455.1680126190186
AudioSynthWaveformModulated waveformMod3;   //xy=1253.5475673675537,757.4761276245117
AudioSynthWaveformModulated waveformMod4;   //xy=1253.75,865
AudioSynthWaveformModulated waveformMod8; //xy=1256.75,1187
AudioSynthWaveformModulated waveformMod12; //xy=1256.428565979004,1579.7620010375977
AudioSynthWaveformModulated waveformMod9; //xy=1258.75,1268
AudioSynthWaveformModulated waveformMod5;   //xy=1282.75,927
AudioSynthWaveformModulated waveformMod6;   //xy=1284.75,1008
AudioMixer4              mixer11; //xy=1409.6666679382324,1810.8888053894043
AudioMixer4              mixer12; //xy=1410,2121.22216796875
AudioMixer4              mixer10; //xy=1433.0000305175781,1518.4443321228027
AudioMixer4              mixer9; //xy=1459.6666107177734,1184.2221698760986
AudioMixer4              mixer8; //xy=1510.3333168029785,962.6666412353516
AudioMixer4              mixer7; //xy=1556.999984741211,748.0000801086426
AudioEffectEnvelope      envelope5; //xy=1568.75,1851.25
AudioEffectEnvelope      envelope6; //xy=1574.6666259765625,2144.28564453125
AudioEffectEnvelope      envelope4; //xy=1607.5000171661377,1550.0000457763672
AudioEffectEnvelope      envelope3; //xy=1621.4168167114258,1150.333251953125
AudioEffectEnvelope      envelope2;      //xy=1685.7499923706055,978.6667156219482
AudioEffectEnvelope      envelope1;      //xy=1722.952377319336,856.0474662780762
AudioSynthWaveformDc     dc1;            //xy=1798.5951232910156,1919.3096504211426
AudioMixer4              mixer5; //xy=1808.75,1667.5
AudioMixer4              mixer1;         //xy=1893.3334121704102,1183.3333597183228
AudioAmplifier           amp2;           //xy=1967.1108627319336,1785.920612335205
AudioMixer4              mixer6; //xy=1984.33349609375,1622.25927734375
AudioEffectEnvelope      envelope7; //xy=1994.5,1937.40478515625
AudioEffectEnvelope      envelope8; //xy=1998.785888671875,1991.6905517578125
AudioFilterStateVariable filter2;        //xy=2161.508026123047,1533.1745433807373
AudioFilterStateVariable filter1;        //xy=2184.7819023132324,1695.258014678955
AudioMixer4              mixer13; //xy=2325.1109466552734,1463.1111907958984
AudioEffectDelay         delay1;         //xy=2343.737106323242,1192.8283309936523
AudioMixer4              mixer2;         //xy=2345.555206298828,1328.8888874053955
AudioEffectFreeverb      freeverb1;      //xy=2390.7379150390625,1606.4525146484375
AudioMixer4              mixer3;         //xy=2568.2938346862793,1511.5078926086426
AudioEffectBitcrusher    bitcrusher1;    //xy=2651.38920211792,1423.888810634613
AudioMixer4              mixer4;         //xy=2764.722412109375,1518.8888549804688
AudioAmplifier           amp1;           //xy=2882.944079081217,1665.4444376627603
AudioOutputI2S           i2s1;           //xy=2946.166748046875,1556.4520263671875
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
AudioConnection          patchCord20(waveformMod13, 0, mixer11, 0);
AudioConnection          patchCord21(waveformMod17, 0, mixer12, 1);
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
AudioConnection          patchCord37(mixer11, envelope5);
AudioConnection          patchCord38(mixer12, envelope6);
AudioConnection          patchCord39(mixer10, envelope4);
AudioConnection          patchCord40(mixer9, envelope3);
AudioConnection          patchCord41(mixer8, envelope2);
AudioConnection          patchCord42(mixer7, envelope1);
AudioConnection          patchCord43(envelope5, 0, mixer5, 1);
AudioConnection          patchCord44(envelope6, 0, mixer5, 2);
AudioConnection          patchCord45(envelope4, 0, mixer5, 0);
AudioConnection          patchCord46(envelope3, 0, mixer1, 2);
AudioConnection          patchCord47(envelope2, 0, mixer1, 1);
AudioConnection          patchCord48(envelope1, 0, mixer1, 0);
AudioConnection          patchCord49(dc1, envelope7);
AudioConnection          patchCord50(dc1, envelope8);
AudioConnection          patchCord51(mixer5, 0, mixer6, 1);
AudioConnection          patchCord52(mixer1, 0, mixer6, 0);
AudioConnection          patchCord53(amp2, 0, filter1, 0);
AudioConnection          patchCord54(mixer6, amp2);
AudioConnection          patchCord55(envelope7, 0, filter2, 1);
AudioConnection          patchCord56(envelope8, 0, filter1, 1);
AudioConnection          patchCord57(filter2, 2, delay1, 0);
AudioConnection          patchCord58(filter2, 2, mixer13, 1);
AudioConnection          patchCord59(filter1, 0, filter2, 0);
AudioConnection          patchCord60(mixer13, 0, mixer3, 1);
AudioConnection          patchCord61(mixer13, freeverb1);
AudioConnection          patchCord62(delay1, 0, mixer2, 0);
AudioConnection          patchCord63(delay1, 1, mixer2, 1);
AudioConnection          patchCord64(delay1, 2, mixer2, 2);
AudioConnection          patchCord65(delay1, 3, mixer2, 3);
AudioConnection          patchCord66(mixer2, 0, mixer13, 0);
AudioConnection          patchCord67(freeverb1, 0, mixer3, 0);
AudioConnection          patchCord68(mixer3, 0, mixer4, 1);
AudioConnection          patchCord69(mixer3, bitcrusher1);
AudioConnection          patchCord70(bitcrusher1, 0, mixer4, 0);
AudioConnection          patchCord71(mixer4, amp1);
AudioConnection          patchCord72(amp1, 0, i2s1, 0);
AudioConnection          patchCord73(amp1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=2332.40234375,1058.23828125
// GUItool: end automatically generated code







// POTI DEFINITIONS
#define destinationPin A0
#define reverbPin A1
#define noise A2
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

int lastPosition = -1;        // Track the last detected position

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
  Serial.begin(115200);
  delay(1500);

  Serial.println("Starting USB Host MIDI");

  // Initialize USBHost
  myusb.begin();

  // MIDI Setup
  midi1.setHandleNoteOn(myNoteOn);
  midi1.setHandleNoteOff(myNoteOff);

  // Audio Setup
  AudioMemory(300);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.6);
  sgtl5000_1.adcHighPassFilterDisable();

  // ringA.begin();
  // ringB.begin();
  // ringC.begin();
  // ringD.begin();

  // // Set brightness to a low value to minimize current draw
  // ringA.setBrightness(25); // Adjust brightness as needed (0-255)
  // ringB.setBrightness(25);
  // ringC.setBrightness(25);
  // ringD.setBrightness(25);

  // // Clear all LEDs to start
  // ringA.clear();
  // ringB.clear();
  // ringC.clear();
  // ringD.clear();

  // // Show initial state (off)
  // ringA.show();
  // ringB.show();
  // ringC.show();
  // ringD.show();

  // // Test by lighting up all rings in different colors
  // lightUpRing(ringA, 255, 0, 0);   // Red
  // lightUpRing(ringB, 0, 255, 0);   // Green
  // lightUpRing(ringC, 0, 0, 255);   // Blue
  // lightUpRing(ringD, 255, 255, 0); // Yellow

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

  amp1.gain(1);

  for (int voice = 0; voice < NUM_VOICES; voice++) {
    for (int groupIndex = 0; groupIndex < 3; groupIndex++){
    waveforms[groupIndex][voice]->frequencyModulation(0.05);
    }
  }

  setWaveformType(0, WAVEFORM_SINE);
  setWaveformType(1, WAVEFORM_SAWTOOTH);
  setWaveformType(2, WAVEFORM_TRIANGLE);

  // Initialize mixer gains
  values[7][0] = 50;
  values[7][1] = 50;
  values[7][2] = 50;


  //ENVELOPE VOICE MIXERS
  mixer1.gain(0, 0.25);
  mixer1.gain(1, 0.25);
  mixer1.gain(2, 0.25);
  mixer1.gain(3, 0.25);

  mixer5.gain(0, 0.25);
  mixer5.gain(1, 0.25);
  mixer5.gain(2, 0.25);
  mixer5.gain(3, 0.25);

  //GROUP VOICE MIXER
  mixer6.gain(0, 0.5);
  mixer6.gain(1, 0.5);

  //DELAY MIXER
  mixer2.gain(0, 0.25);
  mixer2.gain(1, 0.2);
  mixer2.gain(2, 0.15);
  mixer2.gain(3, 0.1);

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
  
  //DELAY DRY/WET MIXER
  mixer13.gain(0, 0.5);
  mixer13.gain(1, 0.5);

  // Attenuate signal to reduce Noise
  amp2.gain(1);

  // Initialize envelopes
  setEnvelopes(100, 100, 100, 300);


  // pink1.amplitude(0.1);
  
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
  // pinMode(encASw, INPUT_PULLUP);
  // pinMode(encBSw, INPUT_PULLUP);
  // pinMode(encCSw, INPUT_PULLUP);
  // pinMode(encDSw, INPUT_PULLUP);
  
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
  AudioNoInterrupts();
  Serial.println(AudioMemoryUsageMax());
  // Check for available voices
  for (int i = 0; i < NUM_VOICES; i++) {
    if (!voices[i].active) {
      assignVoice(i, note, frequency);
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
  assignVoice(oldestVoiceIndex, note, frequency);

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
      envelope5.noteOff();
      break;
    case 5:
      envelope6.noteOff();
      break;
  }
}

void setValues(){

  AudioNoInterrupts();

 //Destination
  
  destinationPos = determinePosition(destinationValue);
 
  handleEncoders(destinationPos);

  revRoomSize = values[2][0] / 100.0f;
  revDamping = values[2][1] / 100.0f;
  // Serial.println(revRoomSize);
  // Serial.println(revDamping);

  //WAVEFORMS TODO

  //AMP MIXER TODO
  // setMixerGains(0, map(values[7][0], 0, 100, 0, 25) / 100.0f);
  // setMixerGains(1, map(values[7][1], 0, 100, 0, 25) / 100.0f);
  // setMixerGains(2, map(values[7][2], 0, 100, 0, 25) / 100.0f);


  //LP FILTER
  filter1.frequency(map(lpCutValue, 0, 1023, 2000, 12000));
  filter1.resonance(map(lpResValue, 0, 1023, 70, 500)/100);

  //HP FILTER
  filter2.frequency(map(hpCutValue, 0, 1023, 0, 10000));
  filter2.resonance(map(hpResValue, 0, 1023, 70, 500)/100);

  // //NOISE TODO
  // //mixer1.gain(3, noise)

  //DISTORTION
  distortWetLevel = map(distortValue, 0, 1023, 0, 100) / 100.0; // Map to 0.0 - 1.0
  distortDryLevel = 1.0 - distortWetLevel;  


  mixer4.gain(0, distortWetLevel); 
  mixer4.gain(1, distortDryLevel);
  

  //ECHO
  echoWetLevel = map(echoValue, 0, 1023, 0, 100) / 100.0; // Map to 0.0 - 1.0
  echoDryLevel = 1.0 - echoWetLevel;  

  mixer13.gain(0, echoWetLevel); 
  mixer13.gain(1, echoDryLevel);



  //REVERB
  reverbWetLevel = map(reverbValue, 0, 1023, 0, 100) / 100.0; // Map to 0.0 - 1.0
  reverbDryLevel = 1.0 - reverbWetLevel;  

  mixer3.gain(0, reverbWetLevel); 
  mixer3.gain(1, reverbDryLevel/2); 
  mixer3.gain(2, reverbDryLevel/2); 

  freeverb1.damping(revDamping);
  freeverb1.roomsize(revRoomSize);

 

  //VOLUME
  amp1.gain(map(volumeValue, 0, 1023, 0, 500)/100);

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

// Function to update the LED ring progress with round trips
void updateLedRing(int encoderIndex, int value) {
  Adafruit_NeoPixel* ring = &ledRings[encoderIndex];

  // Number of LEDs to light up (scaled down for minimal current usage)
  int numLedsToLight = map(value % 100, 0, 100, 0, NUM_LEDS / 4);  // Light up fewer LEDs
  int roundTripCount = value / 100;  // Number of round trips completed
  roundTrips[encoderIndex] = roundTripCount;

  // Calculate brightness based on round trip count (limited to MAX_BRIGHTNESS)
  int brightnessLevel = min((roundTripCount * BRIGHTNESS_STEP), MAX_BRIGHTNESS);

  Serial.print("Ring ");
  Serial.print(encoderIndex);
  Serial.print(" | Value: ");
  Serial.print(value);
  Serial.print(" | LEDs: ");
  Serial.print(numLedsToLight);
  Serial.print(" | Brightness: ");
  Serial.println(brightnessLevel);

  // Light up LEDs according to progress
  for (int i = 0; i < NUM_LEDS; i++) {
    if (i == numLedsToLight) {
      ring->setPixelColor(i, ring->Color(brightnessLevel, brightnessLevel, 0));  // Yellow with adjusted brightness
    } else {
      ring->setPixelColor(i, ring->Color(0, 0, 0));  // Turn off remaining LEDs
    }
  }
  ring->show();  // Update the LED ring
}

void handleEncoders(int currentPosition) {
  long encCurrent[NUM_ENCODERS];
  Encoder* encoders[NUM_ENCODERS] = {&encC, &encB, &encA, &encD};  // Corrected the encoder order based on the ring mapping

  // Read all encoders
  for (int i = 0; i < NUM_ENCODERS; i++) {
    encCurrent[i] = encoders[i]->read();

    if (encCurrent[i] != encoderLast[i]) {
      int delta = encCurrent[i] - encoderLast[i];  // Difference in encoder position
      int adjustment = delta > 0 ? 1 : -1;  // Determine adjustment (clockwise or counterclockwise)

      switch (currentPosition) {
        case 3:  // Reverb control
          if (i == 0) {
            // Encoder 0 adjusts damping
            values[currentPosition][i] += adjustment;  // Adjust the damping value
            values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp between 0 and 100

            float dampingValue = values[currentPosition][i] / 100.0;  // Scale to 0.0 - 1.0
            freeverb1.damping(dampingValue);  // Set damping value

            // Debug output for Serial Monitor
            Serial.print("Set reverb damping to: ");
            Serial.println(dampingValue);

            // Update the LED ring progress
            updateLedRing(i, values[currentPosition][i]);
          } else if (i == 1) {
            // Encoder 1 adjusts room size
            values[currentPosition][i] += adjustment;  // Adjust the room size value
            values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp between 0 and 100

            float roomsizeValue = values[currentPosition][i] / 100.0;  // Scale to 0.0 - 1.0
            freeverb1.roomsize(roomsizeValue);  // Set room size value

            // Debug output for Serial Monitor
            Serial.print("Set reverb room size to: ");
            Serial.println(roomsizeValue);

            // Update the LED ring progress
            updateLedRing(i, values[currentPosition][i]);
          }
          break;
        case 4:  // Delay time adjustment
          values[currentPosition][i] += adjustment;  // Increment or decrement the delay time
          values[currentPosition][i] = clampValue(values[currentPosition][i], 100, 1000);  // Clamp between 100 ms and 1000 ms

          delay1.delay(i, values[currentPosition][i]);  // Set the delay for this tap

          // Debug output for Serial Monitor
          Serial.print("Set delay time for channel ");
          Serial.print(i);
          Serial.print(" to: ");
          Serial.print(values[currentPosition][i]);
          Serial.println(" ms");

          // Update the LED ring progress
          updateLedRing(i, map(values[currentPosition][i], 100, 1000, 0, 100));  // Map to 0-100 for LED progress
          break;

        case 7: {  // Envelope adjustment (using braces to create a new scope)
          values[currentPosition][i] += adjustment;  // Increment or decrement the value
          values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp to 0-100

          float envelopeValue;  // Declare the variable outside of inner switch
          if (i == 2) {
            envelopeValue = values[currentPosition][i] / 100.0f ;  // Sustain: 0 to 1
          } else {
            envelopeValue = map(values[currentPosition][i], 0, 100, 0, 1000);  // Attack/Decay/Release: 0 to 1000 ms
          }

          // Update the appropriate envelope parameter
          switch (i) {
            case 0:
              setEnvelopes(envelopeValue, -1, -1, -1);  // Adjust attack
              Serial.print("Set envelope attack to: ");
              break;
            case 1:
              setEnvelopes(-1, envelopeValue, -1, -1);  // Adjust decay
              Serial.print("Set envelope decay to: ");
              break;
            case 2:
              setEnvelopes(-1, -1, envelopeValue, -1);  // Adjust sustain
              Serial.print("Set envelope sustain to: ");
              break;
            case 3:
              setEnvelopes(-1, -1, -1, envelopeValue);  // Adjust release
              Serial.print("Set envelope release to: ");
              break;
          }

          Serial.println(envelopeValue);
          updateLedRing(i, values[currentPosition][i]);  // Update the LED ring progress
          break;
        }

        case 8: {  // Waveform modulation mix (also wrapped in braces)
          if (i <= 2) {  // Encoders 0, 1, 2 adjust the mix
            values[currentPosition][i] += adjustment;  // Increment or decrement the value
            values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp to 0-100

            float gainValue = values[currentPosition][i] / 400.0;  // Convert to 0.0 - 0.25 range
            setMixerGains(i, gainValue);  // Adjust the mixer gain for this channel

            // Debug output for Serial Monitor
            Serial.print("Set mixer gain for channel ");
            Serial.print(i);
            Serial.print(" to: ");
            Serial.println(gainValue);

            updateLedRing(i, values[currentPosition][i]);  // Update the LED ring progress
          } else if (i == 3) {  // Encoder 3 adjusts LFO frequency
            values[currentPosition][i] += adjustment;  // Increment or decrement the value
            values[currentPosition][i] = clampValue(values[currentPosition][i], 0, 100);  // Clamp to 0-100

            float lfoFrequency = map(values[currentPosition][i], 0, 100, 0.1, 10.0);  // Map to 0.1 - 10 Hz
            waveform1.frequency(lfoFrequency);  // Adjust the LFO frequency

            // Debug output for Serial Monitor
            Serial.print("Set LFO frequency to: ");
            Serial.println(lfoFrequency);

            updateLedRing(i, values[currentPosition][i]);  // Update the LED ring progress
          }
          break;
        }

        default: {
          // Handle other positions if needed
          Serial.print("Encoder ");
          Serial.print(i);
          Serial.print(" adjusted at position ");
          Serial.println(currentPosition);
          break;
        }
      }

      encoderLast[i] = encCurrent[i];  // Update the last position
    }
  }
}
