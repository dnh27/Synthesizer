#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <USBHost_t36.h> // Include the USB Host library

USBHost myusb;         // Create USBHost object
USBHub hub1(myusb);    // Optional: Add support for USB hubs
MIDIDevice midi1(myusb); // Create a MIDI device object on USBHost

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=399.6666259765625,533.9999389648438
AudioSynthWaveformModulated waveformMod1;   //xy=621.6666259765625,535.9999389648438
AudioEffectEnvelope      envelope1;      //xy=827.6666259765625,535.9999389648438
AudioMixer4              mixer1;         //xy=997.333251953125,537.3332824707031
AudioOutputI2S           i2s1;           //xy=1164.6666259765625,520.9999084472656
AudioConnection          patchCord1(waveform1, 0, waveformMod1, 0);
AudioConnection          patchCord2(waveformMod1, envelope1);
AudioConnection          patchCord3(envelope1, 0, mixer1, 0);
AudioConnection          patchCord4(mixer1, 0, i2s1, 0);
AudioConnection          patchCord5(mixer1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1712.2222366333008,450.5555534362793
// GUItool: end automatically generated code

// Keep track of the current note
bool noteActive = false;
byte currentNote = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    // Wait for Serial Monitor to connect
  }

  Serial.println("Starting USB Host MIDI");

  // Initialize USBHost
  myusb.begin();

  // MIDI Setup
  midi1.setHandleNoteOn(myNoteOn);
  midi1.setHandleNoteOff(myNoteOff);


  // Audio Setup
  AudioMemory(20);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.32);

  // LFO
  waveform1.begin(WAVEFORM_SINE);

  waveform1.frequency(2);
  waveform1.amplitude(0.01);
  
  // MODULATED OSC.
  waveformMod1.begin(WAVEFORM_SINE);
  waveformMod1.amplitude(0.75);
  
  mixer1.gain(0, 1);
}

void loop() {
  // Process USB events
  myusb.Task();
  midi1.read();
}

void myNoteOn(byte channel, byte note, byte velocity) {
  Serial.print("Note On - Channel: ");
  Serial.print(channel);
  Serial.print(", Note: ");
  Serial.print(note);
  Serial.print(", Velocity: ");
  Serial.println(velocity);

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
  Serial.print("Note Off - Channel: ");
  Serial.print(channel);
  Serial.print(", Note: ");
  Serial.print(note);
  Serial.print(", Velocity: ");
  Serial.println(velocity);

  if (noteActive && note == currentNote) {
    // Stop the current note only if it matches the note-off event
    envelope1.noteOff();
    noteActive = false;
  }
}


