#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// Constants
const int NUM_VOICES = 1;  // We only need one voice for this behavior


// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine1;          //xy=518.566650390625,338.566650390625
AudioSynthWaveformSineModulated sine_fm1;       //xy=692,403
AudioEffectEnvelope      envelope1;      //xy=927,390
AudioOutputI2S           i2s1;           //xy=1119,372
AudioConnection          patchCord1(sine1, sine_fm1);
AudioConnection          patchCord2(sine_fm1, envelope1);
AudioConnection          patchCord3(envelope1, 0, i2s1, 0);
AudioConnection          patchCord4(envelope1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=757.566650390625,607.566650390625
// GUItool: end automatically generated code


// Keep track of the current note
bool noteActive = false;
byte currentNote = 0;

void setup() {
  Serial.begin(115200);

  // MIDI Setup
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandleNoteOff(myNoteOff);

  // Audio Setup
  AudioMemory(20);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.32);

  sine_fm1.amplitude(0.75);
  sine1.frequency(3);
  
}

void loop() {
  usbMIDI.read();
  sine1.frequency(map(analogRead(A9), 0, 1023, 0, 20));


}

void myNoteOn(byte channel, byte note, byte velocity) {


  if (noteActive) {
    // Stop the currently active note
    envelope1.noteOff();
  }

  // Play the new note
  float frequency = 440.0 * pow(2.0, (note - 69) / 12.0);
  sine_fm1.frequency(frequency);
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
