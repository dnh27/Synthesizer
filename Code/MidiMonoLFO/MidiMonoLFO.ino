#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

#define VCOButton 1
#define LFOBUTTON 0

// Constants
const int NUM_VOICES = 1;  // We only need one voice for this behavior

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=499,388
AudioSynthWaveformModulated waveformMod1;   //xy=721,390
AudioEffectEnvelope      envelope1;      //xy=927,390
AudioOutputI2S           i2s1;           //xy=1119,372
AudioConnection          patchCord1(waveform1, 0, waveformMod1, 0);
AudioConnection          patchCord2(waveformMod1, envelope1);
AudioConnection          patchCord3(envelope1, 0, i2s1, 0);
AudioConnection          patchCord4(envelope1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=757.566650390625,607.566650390625
// GUItool: end automatically generated code


int waveforms[4] = {
  WAVEFORM_SINE,
  WAVEFORM_SAWTOOTH,
  WAVEFORM_SQUARE,
  WAVEFORM_TRIANGLE
};

// get amount of waveforms

int amount_waveforms = (sizeof(waveforms) / sizeof(int));

int vco_waveform = 0;
int lfo_waveform = 0;

// Keep track of the current note
bool noteActive = false;
byte currentNote = 0;


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
  sgtl5000_1.volume(0.32);

  //LFO
  waveform1.begin(WAVEFORM_SINE);

  waveform1.frequency(2);
  waveform1.amplitude(0.01);
  
  //MODULATED OSC.
  waveformMod1.begin(WAVEFORM_SINE);
  waveformMod1.amplitude(0.75);
  
  
}

void loop() {
  usbMIDI.read();

  waveform1.frequency(map(analogRead(A9), 0, 1023, 0, 20));

  //TODO BUTTONS FOR CHANGING WAVEFORMS
  if (digitalRead(VCOButton) == LOW){

    Serial.println("VCO BUTTON PRESSED");

    if (vco_waveform >= (amount_waveforms - 1)){
      vco_waveform = 0;
    }

    else{
      vco_waveform += 1;
    }

    waveformMod1.begin(waveforms[vco_waveform]);

  }

  if (digitalRead(lfo_waveform) == LOW){

    Serial.println("LFO BUTTON PRESSED");


    if (lfo_waveform >= (amount_waveforms - 1)){
      lfo_waveform = 0;
    }

    else{
      lfo_waveform += 1;
    }

    waveform1.begin(waveforms[lfo_waveform]);
  }



}

void myNoteOn(byte channel, byte note, byte velocity) {


  if (noteActive) {
    // Stop the currently active note
    envelope1.noteOff();
  }

  // Play the new note
  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);
  waveformMod1.frequency(frequency);
  envelope1.noteOn();

  // Update the current note
  currentNote = note;
  noteActive = true;
}

void myNoteOff(byte channel, byte note, byte velocity) {
  if (noteActive && note == currentNote) {
    // Stop the current note only if it matches the note-off event
    envelope1.noteOff();
    noteActive = false;
  }
}
