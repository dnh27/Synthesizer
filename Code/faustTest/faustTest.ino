#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include "freeverb.h"  // Replace with your compiled Faust mono_freeverb header

// Audio Signal Chain
AudioSynthWaveform sineOsc;  // Sine wave oscillator
AudioOutputI2S i2s2;  // Audio output
AudioControlSGTL5000 sgtl5000_1;  // Audio shield control

// Faust object for freeverb
freeverb reverb;

// Audio Connections
AudioConnection patchCord1(sineOsc, 0, reverb, 0);  // Oscillator output to reverb input
AudioConnection patchCord2(reverb, 0, i2s2, 0);  // Reverb output to left channel
AudioConnection patchCord3(reverb, 0, i2s2, 1);  // Reverb output to right channel

// Reverb state
bool reverbEnabled = false;

void setup() {
  Serial.begin(115200);
  AudioMemory(100);  // Allocate memory for audio buffers
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);

  // Initialize Faust freeverb
  reverb.init(44100);  // Sample rate (44.1 kHz)

  // Initial freeverb parameters
  reverb.setParamValue("fb1", 0.5);  // Feedback for the left channel (0.0 - 1.0)
  reverb.setParamValue("fb2", 0.5);  // Feedback for the right channel (0.0 - 1.0)
  reverb.setParamValue("damp", 0.2);  // Damping (0.0 - 1.0)
  reverb.setParamValue("spread", 0.5);  // Stereo spread (0.0 - 1.0)

  // Oscillator settings
  sineOsc.begin(0.5, 440, WAVEFORM_SINE);  // 50% amplitude, 440 Hz (A4)

  // USB MIDI Setup
  usbMIDI.setHandleControlChange(handleControlChange);  // Sustain control
}

void loop() {
  usbMIDI.read();  // Read incoming USB MIDI messages
}

// Sustain Pedal Toggle (MIDI CC 64)
void handleControlChange(byte channel, byte control, byte value) {
  if (control == 64) {  // Sustain pedal (CC 64)
    reverbEnabled = (value >= 64);  // Sustain pedal press toggles reverb
    updateReverbState();
  }
}

void updateReverbState() {
  if (reverbEnabled) {
    reverb.setParamValue("fb1", 0.8);  // Stronger feedback for a bigger reverb tail
    reverb.setParamValue("fb2", 0.8);
    Serial.println("Reverb ON");
  } else {
    reverb.setParamValue("fb1", 0.01);  // Minimal feedback for "bypass" effect
    reverb.setParamValue("fb2", 0.01);
    Serial.println("Reverb OFF");
  }
}
