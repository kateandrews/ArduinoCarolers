#include "Foundation.h"
#include "SongUtils.h"
#include "JingleBells.h"
#include "JingleBellRock.h"
#include "SystemTones.h"
#include "WeWishYouAMerryChristmas.h"

void PlaySong(int SongNo, int PartNo)
{
  switch(SongNo)
  {
    case1:
      PlayJingleBells(PartNo);
      break;
    case2:
      PlayMerryChristmas(PartNo);
      break;
  }
}

unsigned long CalcDurationMs( byte duration, byte tempo )
{
  unsigned long result =  duration * (tempo/Te);

  return result;
}

void PlayTune(const NoteType *tune, size_t numNotes)
{
  unsigned long durationMs;
  for (int i=0; i<numNotes; i++)
  {
    durationMs = CalcDurationMs( tune[i].Duration, Tempo);
    tone(piezo, tune[i].Note, durationMs);
    delay(durationMs);
  }
}

void PlayJingleBells(int partNumber)
{  
  switch (partNumber)
  {
    case 1: PlayTune(JingleBellsDeviceOne, CountOf(JingleBellsDeviceOne));
    break;

    case 2: PlayTune(JingleBellsDeviceTwo, CountOf(JingleBellsDeviceTwo));
    break;    
    
    case 3: PlayTune(JingleBellsDeviceThree, CountOf(JingleBellsDeviceThree));
    break;
  }
}

void PlayMerryChristmas(int partNumber)
{  
  switch (partNumber)
  {
    case 1: PlayTune(MerryChristmasDeviceOne, CountOf(MerryChristmasDeviceOne));
    break;

    case 2: PlayTune(MerryChristmasDeviceTwo, CountOf(MerryChristmasDeviceTwo));
    break;    
    
    case 3: PlayTune(MerryChristmasDeviceThree, CountOf(MerryChristmasDeviceThree));
    break;
  }
}
