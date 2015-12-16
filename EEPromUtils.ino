#include <EEPROM.h>

// The Device ID is stored in address 0 of the EEPROM
int deviceIdAddr = 0;

int GetDeviceId()
{
  int result = EEPROM.read(deviceIdAddr);

  return result;
}


