#include "ArduinoCarolers.h"
#include <IRremote.h>

const int deviceNumber = 2;

int RECV_PIN = 11; // define input pin on Arduino
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
  Serial.begin(38400);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(piezo, OUTPUT);
}

void loop()
{
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
    if (results.value == 0x010)
    {
      Serial.println("Received No 1 from Sony Remote");
    }
    if (results.value == 0x810)
    {
      Serial.println("Received No 2 from Sony Remote");
    }
    if (results.value == 0x410)
    {
      Serial.println("Received No 3 from Sony Remote");
    }
    if (results.value == 0xC10)
    {
      Serial.println("Received No 4 from Sony Remote");
    }
    if (results.value == 0x610)
    {
      Serial.println("Received No 7 from Sony Remote. Start Playing");
      Serial.println("Jingle Bell Rocks");
      JingleBells();
    }
    if (results.value == 0xE10)
    {
      Serial.println("Received No 8 from Sony Remote");
    }
    if (results.value == 0x110)
    {
      Serial.println("Received No 9 from Sony Remote");
    }
    if (results.value == 0xCE9)
    {
      Serial.println("Received STOP from Sony Remote");
    }
    if (results.value == 0x2CE9)
    {
      Serial.println("Received PLAY from Sony Remote");
    }
  }
}

void PlayTune(const NoteType *tune, size_t numNotes)
{
  Serial.println(numNotes);

  for (int i=0; i<numNotes; i++)
  {
    tone(piezo, tune[i].Note, tune[i].Duration);
    delay(tune[i].Duration);
  }
}

void JingleBells()
{  
  switch (deviceNumber)
  {
    case 1: PlayTune(JingleBells1, countOf(JingleBells1));
    break;

    case 2: PlayTune(JingleBells2, countOf(JingleBells2));
    break;    
    
    case 3: PlayTune(JingleBells3, countOf(JingleBells3));
    break;
    
  }
  
}
