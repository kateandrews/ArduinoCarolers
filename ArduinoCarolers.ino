#include "ArduinoCarolers.h"
#include "SongUtils.h"
#include <IRremote.h>

int curDeviceNumber = -1;
int MsgForDevice = -1;
int SongNoToPlay = -1;
int PartNoToPlay = -1;

int RECV_PIN = 11; // define input pin on Arduino
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  curDeviceNumber = GetDeviceId();
  Serial.print( F("Device number is "));
  Serial.println(curDeviceNumber);
  
  irrecv.enableIRIn(); // Start the receiver
  pinMode(piezo, OUTPUT);
}

void loop()
{
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);
    
    DecodeIRMessage(results.value);
    if (MsgForDevice = -1)
    {
      //This Message is not a valid message from arduino device, check if it is from Remote
    }
    irrecv.resume(); // Receive the next value
    if (results.value == 0x010)
    {
      Serial.println(F("Received No 1 from Sony Remote"));
    }
    if (results.value == 0x810)
    {
      Serial.println(F("Received No 2 from Sony Remote"));
    }
    if (results.value == 0x410)
    {
      Serial.println(F("Received No 3 from Sony Remote"));
    }
    if (results.value == 0xC10)
    {
      Serial.println(F("Received No 4 from Sony Remote"));
    }
    if (results.value == 0x610)
    {
      Serial.println(F("Received No 7 from Sony Remote. Start Playing"));
      Serial.println(F("Jingle Bell Rocks"));
      PlayJingleBells(curDeviceNumber);
    }
    if (results.value == 0xE10)
    {
      Serial.println(F("Received No 8 from Sony Remote"));
    }
    if (results.value == 0x110)
    {
      Serial.println(F("Received No 9 from Sony Remote"));
    }
    if (results.value == 0xCE9)
    {
      Serial.println(F("Received STOP from Sony Remote"));
    }
    if (results.value == 0x2CE9)
    {
      Serial.println(F("Received PLAY from Sony Remote"));
    }
  }
}


