#include "ArduinoCarolers.h"
#include <IRremote.h>

const int deviceNumber = 3;

int _isMaster = 0;
int _deviceList[] = {9, 9, 9, 9}; //max 4 devices , and initial 9

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

    //Check master
    if(results.value < 10){
      CheckMaster();
    }

    if (results.value == 0x010) //if receive, No 1 then send the device number
    {
      Serial.println("Received No 1 from Sony Remote, send device number");
      //TODO, send device number.
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

void CheckMaster()
{
  //try to find from device list
  int found = 0;
  int minDeviceNo = 9;
  for (int i = 0; i < 4; i++ ) {
      if(_deviceList[i]== results.value){
        Serial.println("Device already received");
        found = 1;  
      }
      if(_deviceList[i] < minDeviceNo)
        minDeviceNo = _deviceList[i];
  }
  
  if(found == 0) { //not found, add to the device list
    for (int i = 0; i < 4; i++ ) {
        if(_deviceList[i]== 9){
          _deviceList[i] = results.value;
        }
    }    
  }

  if(results.value < minDeviceNo){
    _isMaster = 1;
    Serial.println("Master is " + _isMaster);
  } else {
    _isMaster = 0;
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
