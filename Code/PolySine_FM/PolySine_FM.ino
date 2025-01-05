#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>



// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine1;          //xy=801.9047546386718,1377.6190403529574
AudioSynthWaveformSineModulated sine_fm1;       //xy=1144.7619705200195,1023.3332824707032
AudioSynthWaveformSineModulated sine_fm2;       //xy=1147.619140625,1083.3332986831665
AudioSynthWaveformSineModulated sine_fm3;       //xy=1147.6190795898438,1204.761863708496
AudioSynthWaveformSineModulated sine_fm4;       //xy=1149.0476837158203,1263.3332946300507
AudioSynthWaveformSineModulated sine_fm5;       //xy=1163.3332862854004,1377.6190586090088
AudioSynthWaveformSineModulated sine_fm6;       //xy=1167.6190403529574,1443.3333260672432
AudioSynthWaveformSineModulated sine_fm7;       //xy=1167.6189918518066,1570.4763107299805
AudioSynthWaveformSineModulated sine_fm8;       //xy=1181.90482711792,1639.047649860382
AudioEffectEnvelope      envelope1;      //xy=1417.6191329956055,1059.04758644104
AudioEffectEnvelope      envelope2;      //xy=1463.3333260672432,1250.4761832101003
AudioEffectEnvelope      envelope3;      //xy=1480.4761832101003,1410.4761832101003
AudioEffectEnvelope      envelope4;      //xy=1494.7618974958145,1636.190468924386
AudioMixer4              mixer1;         //xy=1849.0476117815288,1354.7618974958145
AudioOutputI2S           i2s1;           //xy=2100.4761832101003,1354.7618974958145
AudioConnection          patchCord1(sine1, sine_fm1);
AudioConnection          patchCord2(sine1, sine_fm2);
AudioConnection          patchCord3(sine1, sine_fm3);
AudioConnection          patchCord4(sine1, sine_fm4);
AudioConnection          patchCord5(sine1, sine_fm5);
AudioConnection          patchCord6(sine1, sine_fm6);
AudioConnection          patchCord7(sine1, sine_fm7);
AudioConnection          patchCord8(sine1, sine_fm8);
AudioConnection          patchCord9(sine_fm1, envelope1);
AudioConnection          patchCord10(sine_fm2, envelope1);
AudioConnection          patchCord11(sine_fm3, envelope2);
AudioConnection          patchCord12(sine_fm4, envelope2);
AudioConnection          patchCord13(sine_fm5, envelope3);
AudioConnection          patchCord14(sine_fm6, envelope3);
AudioConnection          patchCord15(sine_fm7, envelope4);
AudioConnection          patchCord16(sine_fm8, envelope4);
AudioConnection          patchCord17(envelope1, 0, mixer1, 0);
AudioConnection          patchCord18(envelope2, 0, mixer1, 1);
AudioConnection          patchCord19(envelope3, 0, mixer1, 2);
AudioConnection          patchCord20(envelope4, 0, mixer1, 3);
AudioConnection          patchCord21(mixer1, 0, i2s1, 0);
AudioConnection          patchCord22(mixer1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=2202.4023513793945,1175.738245010376
// GUItool: end automatically generated code

// GUItool: end automatically generated code




/*
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
AudioConnection          patchCord1(waveformMod1, envelope1);
AudioConnection          patchCord2(waveformMod2, envelope2);
AudioConnection          patchCord3(waveformMod3, envelope3);
AudioConnection          patchCord4(waveformMod4, envelope4);
AudioConnection          patchCord5(envelope1, 0, mixer1, 0);
AudioConnection          patchCord6(envelope2, 0, mixer1, 1);
AudioConnection          patchCord7(envelope3, 0, mixer1, 2);
AudioConnection          patchCord8(envelope4, 0, mixer1, 3);
AudioConnection          patchCord9(mixer1, 0, i2s1, 0);
AudioConnection          patchCord10(mixer1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     // Audio shield control

*/
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
  sgtl5000_1.volume(0.4);

  // Initialize oscillators

  //waveform1.begin(1,0,WAVEFORM_SINE);
  sine1.frequency(10);
  sine1.amplitude(0.1);

  //VOICE 1
  sine_fm1.amplitude(1);
  sine_fm1.frequency(2);
  sine_fm2.amplitude(1);
  sine_fm2.frequency(2);

  //VOICE 2
  sine_fm3.amplitude(1);
  sine_fm3.frequency(2);
  sine_fm4.amplitude(1);
  sine_fm4.frequency(2);

  //VOICE 3
  sine_fm5.amplitude(1);
  sine_fm5.frequency(2);
  sine_fm6.amplitude(1);
  sine_fm6.frequency(2);

  //VOICE 4
  sine_fm7.amplitude(1);
  sine_fm7.frequency(2);
  sine_fm8.amplitude(1);
  sine_fm8.frequency(2);

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

  // filter1.frequency(5000);
  // filter1.resonance(0.3);
  // filter1.octaveControl(0);

  // filter2.frequency(500);
  // filter2.resonance(0.3);
  // filter2.octaveControl(0);

  setupVoices();
}

void loop() {
  int a3 = analogRead(A3);

  int a17 = analogRead(A17);

  envelope1.attack(a3);
  envelope2.attack(a3);
  envelope3.attack(a3);
  envelope4.attack(a3);

  //mixer1.gain(0, map(float(a2), 0, 1023, 0, 0.3));
  // int a16 = analogRead(A8);
  // int a15 = analogRead(A8);
  // int a14 = analogRead(A8);
  // Serial.print("A0:");
  // Serial.println(a0);
  
  Serial.print("A17:");
  Serial.println(a17);
  
  // Serial.print("A2:");
  // Serial.println(a2);

  // Serial.print("A3:");
  // Serial.println(a3);


  
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
      sine_fm1.frequency(frequency);
      sine_fm2.frequency(frequency);
      envelope1.noteOn();
      break;
    case 1:
      sine_fm3.frequency(frequency);
      sine_fm4.frequency(frequency);
      envelope2.noteOn();
      break;
    case 2:
      sine_fm5.frequency(frequency);
      sine_fm6.frequency(frequency);
      envelope3.noteOn();
      break;
    case 3:
      sine_fm7.frequency(frequency);
      sine_fm8.frequency(frequency);

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
