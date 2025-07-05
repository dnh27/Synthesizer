#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

#include "AudioSampleIn_a_sentimental_mood_small.h"

// GUItool: begin automatically generated code
AudioPlayMemory          playMem1;       //xy=380.33331298828125,468.3332977294922
AudioOutputI2S           i2s1;           //xy=628.3333282470703,456.3333282470703
AudioConnection          patchCord1(playMem1, 0, i2s1, 0);
AudioConnection          patchCord2(playMem1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;

// GUItool: end automatically generated code

void setup() {
  Serial.begin(9600);

  // Audio connections require memory to work.  For more
  // detailed information, see the MemoryAndCpuUsage example
  AudioMemory(8);

  // Comment these out if not using the audio adaptor board.
  // This may wait forever if the SDA & SCL pins lack
  // pullup resistors
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.35);

}

void playFile(const unsigned int* filename)
{
  Serial.print("Playing file: ");

  // Start playing the file.  This sketch continues to
  // run while the file plays.
  playMem1.play(filename);

  // A brief delay for the library read WAV info
  delay(25);

  // Simply wait for the file to finish playing.
  while (playMem1.isPlaying()) {
    // uncomment these lines if you audio shield
    // has the optional volume pot soldered
    //float vol = analogRead(15);
    //vol = vol / 1024;
    // sgtl5000_1.volume(vol);
  }
}


void loop() {
  playFile(AudioSampleIn_a_sentimental_mood_small);  // filenames are always uppercase 8.3 format
  delay(500);
  
}

