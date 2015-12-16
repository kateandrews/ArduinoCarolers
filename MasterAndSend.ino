//Send device number
int _isMaster = 0;
int _deviceList[] = {9, 9, 9, 9}; //max 4 devices , and initial 9
IRsend irsend;


void SendDeviceNumber(){
      //send device number twice
      for (int i = 0; i <2; i++)
      {
        Serial.println("Sending device number");
        irsend.sendSony (0x3, 11); //current device number
        delay(100);
      };  
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

