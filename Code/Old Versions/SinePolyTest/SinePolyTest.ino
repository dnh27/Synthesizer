#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform2;      //xy=348.566650390625,601.566650390625
AudioSynthWaveform       waveform1;      //xy=416,424.0000305175781
AudioSynthWaveformModulated waveformMod1;   //xy=699,433.0000305175781
AudioSynthWaveformModulated waveformMod2;   //xy=715,504.0000305175781
AudioSynthWaveformModulated waveformMod3;   //xy=717.566650390625,583.566650390625
AudioSynthWaveformModulated waveformMod4;   //xy=731.566650390625,663.566650390625
AudioFilterBiquad        biquad1;        //xy=921.666748046875,564.0000610351562
AudioFilterBiquad        biquad2;        //xy=976.5667114257812,673.566650390625
AudioEffectEnvelope      envelope1;      //xy=1121,519.0000305175781
AudioEffectEnvelope      envelope2;      //xy=1177.8833312988281,706.8833312988281
AudioAmplifier           amp1;           //xy=1287,608
AudioEffectDelay         delay1;         //xy=1422,627
AudioEffectFreeverb      freeverb1;      //xy=1627,600
AudioOutputI2S           i2s2; //xy=1803.3333740234375,587.8333129882812
AudioConnection          patchCord1(waveform2, 0, waveformMod3, 0);
AudioConnection          patchCord2(waveform2, 0, waveformMod4, 0);
AudioConnection          patchCord3(waveform1, 0, waveformMod1, 0);
AudioConnection          patchCord4(waveform1, 0, waveformMod2, 0);
AudioConnection          patchCord5(waveformMod1, biquad1);
AudioConnection          patchCord6(waveformMod2, biquad1);
AudioConnection          patchCord7(waveformMod3, biquad2);
AudioConnection          patchCord8(waveformMod4, biquad2);
AudioConnection          patchCord9(biquad1, envelope1);
AudioConnection          patchCord10(biquad2, envelope2);
AudioConnection          patchCord11(envelope1, amp1);
AudioConnection          patchCord12(envelope2, amp1);
AudioConnection          patchCord13(amp1, delay1);
AudioConnection          patchCord14(delay1, 0, freeverb1, 0);
AudioConnection          patchCord15(delay1, 1, freeverb1, 0);
AudioConnection          patchCord16(delay1, 2, freeverb1, 0);
AudioConnection          patchCord17(delay1, 3, freeverb1, 0);
AudioConnection          patchCord18(delay1, 4, freeverb1, 0);
AudioConnection          patchCord19(delay1, 5, freeverb1, 0);
AudioConnection          patchCord20(delay1, 6, freeverb1, 0);
AudioConnection          patchCord21(delay1, 7, freeverb1, 0);
AudioConnection          patchCord22(freeverb1, 0, i2s2, 0);
AudioConnection          patchCord23(freeverb1, 0, i2s2, 1);
AudioControlSGTL5000  sgtl5000_1; //xy=685.1666870117188,722
// GUItool: end automatically generated code


// Keep track of the current notes for each voice
bool V1noteActive = false;
bool V2noteActive = false;

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

  waveformMod1.amplitude(1);
  waveformMod2.amplitude(1);
  waveformMod3.amplitude(1);
  waveformMod4.amplitude(1);

  amp1.gain(1);
}

void loop() {
  usbMIDI.read();
}

void myNoteOn(byte channel, byte note, byte velocity) {
  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);

  // If the first voice is not active, use it
  if (!V1noteActive) {
    waveformMod1.frequency(frequency);
    waveformMod2.frequency(frequency);

    envelope1.noteOn();
    V1currentNote = note;
    V1noteActive = true;
  }
  // If the first voice is busy, but the second one is free, use it
  else if (!V2noteActive) {
    waveformMod3.frequency(frequency);
    waveformMod4.frequency(frequency);

    envelope2.noteOn();
    V2currentNote = note;
    V2noteActive = true;
  }
  // If both voices are busy, do nothing or implement voice stealing logic
}

void myNoteOff(byte channel, byte note, byte velocity) {
  if (note == V1currentNote) {
    envelope1.noteOff();
    V1noteActive = false;
  } else if (note == V2currentNote) {
    envelope2.noteOff();
    V2noteActive = false;
  }
}
