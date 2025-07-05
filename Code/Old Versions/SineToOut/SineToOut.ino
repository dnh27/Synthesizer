

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform waveform1;      //xy=2066,1939
AudioFilterStateVariable filter1;  //xy=2335,1941
AudioFilterStateVariable filter2;  //xy=2527,1980
AudioOutputI2S i2s1;               //xy=2796,1970
AudioConnection patchCord1(waveform1, 0, filter1, 0);
AudioConnection patchCord2(filter1, 0, filter2, 0);
AudioConnection patchCord3(filter2, 2, i2s1, 0);
AudioConnection patchCord4(filter2, 2, i2s1, 1);
AudioControlSGTL5000 sgtl5000;  //xy=2842,1758
// GUItool: end automatically generated code


void setup() {
  // Start Serial for debugging
  Serial.begin(115200);
  delay(1000);
  Serial.println("Starting Audio Test...");

  // Allocate memory for audio processing
  AudioMemory(200);

  // Enable SGTL5000 and set volume
  sgtl5000.enable();
  sgtl5000.volume(0.4);       // Set output volume (0.0 - 1.0)
  sgtl5000.lineOutLevel(29);  // Default 1.29V p-p for line out

  // Configure waveform
  waveform1.begin(WAVEFORM_BANDLIMIT_SAWTOOTH);
  waveform1.frequency(440);  // 440 Hz (A4)
  waveform1.amplitude(0.5);  // Set amplitude (0.0 - 1.0)

  filter1.frequency(1000);
  // filter1.resonance(0);
  filter2.frequency(0);


  Serial.println("Sine wave playing at 440Hz...");
}

void loop() {
  // Nothing needed in the loop, sine wave plays continuously
}
