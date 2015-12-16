#ifndef SongUtilsHeader
  #define SongUtilsHeader
    
  // Song
  typedef struct
  {
    unsigned int Note;
    byte Duration;
  } NoteType;
  
  // Notes
  const unsigned int D6 = 1175;
  const unsigned int C6 = 1047;
  
  const unsigned int B5 =  988;
  const unsigned int B5f =  933;
  const unsigned int A5a = 880;
  const unsigned int A5af = 831;
  const unsigned int G5s =  831;
  const unsigned int G5 =  784;
  const unsigned int F5s = 740;
  const unsigned int F5 = 698;
  const unsigned int E5 =  659;
  const unsigned int E5f =  622;
  const unsigned int D5 = 587;
  const unsigned int C5s = 554;
  const unsigned int C5 = 523;
  
  const unsigned int B4 = 494;
  const unsigned int B4f = 467;
  const unsigned int A4a = 440;
  const unsigned int A4af = 415;
  const unsigned int G4s = 415;
  const unsigned int G4 = 392;
  const unsigned int F4s = 370;
  const unsigned int F4 = 349;
  const unsigned int E4 =  330;
  const unsigned int E4f =  311;
  const unsigned int D4 = 294;
  const unsigned int C4s = 277;
  const unsigned int C4 = 262;
  
  const unsigned int B3 = 247;
  const unsigned int B3b = 233;
  const unsigned int A3a = 220;
  const unsigned int A3af = 208;
  const unsigned int G3s = 208;
  const unsigned int G3 = 196;
  const unsigned int F3s = 185;
  const unsigned int F3 = 175;
  const unsigned int E3 =  165;
  const unsigned int E3f =  156;
  const unsigned int D3 = 147;
  const unsigned int C3s = 139;
  const unsigned int C3 = 131;
  
  const unsigned int B2 = 123;
  
  const unsigned int Z1 = 0;
  
  //Tempo
  
  const byte Te = 2; // Sixteenth = semiquaver //2
  const byte Tee = 3; // Dotted sixteenth = dotted semiquaver //3
  const byte Ti = 4; // Eighth = quaver //4
  const byte Tii = 6; // Dotted Eighth = dotted quaver //6
  const byte Ta = 8; // Quarter = crotchet //8
  const byte Taa = 12; // Dotted Quarter = dotted crotchet //12
  const byte Taah = 16; // Half note = minum //16
  const byte Taahah = 24; // Dotted Half note = dotted minum //24
  const byte Taahahah = 32; // Whole Note = breve //32
  
  const int Tempo = 125;
#endif  

