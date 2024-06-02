
## Was ich erreicht habe

Thomann Piano Midi Input zu Teensy Sinus Welle.

## Was schief ging

Midi.OnNoteOff führt Envelope.noteOff aus.
D.h. auch wenn eine andere Klaviertaste als die momentan gespielte das Signal NoteOff sendet, wird die momentan gespielte auch gestoppt, da sie das selbe Envelope nutzen. 

## Für nächstes Mal

Bessere OnNoteOff Lösung