
// General
#define countOf(a) (sizeof(a) / sizeof(*(a))) 

// Piezo
const int piezo = 8;

int tuneGap = 2000;

// Notes
const float D6 = 1174.66;
const float C6 = 1046.50;

const float B5 =  987.77;
const float A5a = 880.00;
const float G5 =  783.99;
const float F5s = 739.99;
const float E5 =  659.25;
const float D5 = 587.33;
const float C5 = 523.25;

const float B4 = 493.88;
const float A4a = 440.00;
const float G4 = 392.00;
const float F4s = 369.99;
const float E4 =  329.63;
const float D4 = 293.66;
const float C4 = 261.63;

const float B3 = 246.94;
const float A3a = 220.00;
const float G3 = 196.00;
const float F3s = 185.00;
const float E3 =  164.81;
const float D3 = 146.83;
const float C3 = 130.81;

const float B2 = 123.47;

const float Z1 = 0.00;

const int Te = 125; // Sixtenth TODO: Check music notatin for this
const int Ti = 250; // Eighth
const int Tii = 375; // Dotted Eighth
const int Ta = 500; // Quarter
const int Taa = 750; // Dotted Quarter
const int Taah = 1000; // Half note
const int Taahah = 1500; // Dotted Half note
const int Taahahah = 2000; // Whole Note

// Song
typedef struct
{
  float Note;
  int Duration;
} NoteType;

NoteType JingleBellRock[] =     
  { { G5,  Tii},  { G5,  Te}, { G5,  Ta}, { F5s, Tii}, { F5s, Te}, { F5s, Ta},      { E5,  Tii},  { F5s, Te}, { E5,  Ta}, { B4,  Taa}, { Z1,  Ti},      { E5,  Tii},  { F5s, Te}, { E5,  Ta}, { B4,  Ta}, { D5,  Ta}
  , { E5,  Tii},  { F5s, Te}, { E5,  Ta}, { C5,  Taah} };

NoteType JingleBellRock2[] =     
  { { G4,  Tii},  { G4,  Te}, { G4,  Ta}, { F4s, Tii}, { F4s, Te}, { F4s, Ta},      { E4,  Tii},  { F4s, Te}, { E4,  Ta}, { B3,  Taa}, { Z1,  Ti},      { E4,  Tii},  { F4s, Te}, { E4,  Ta}, { B3,  Ta}, { D4,  Ta}
  , { E4,  Tii},  { F4s, Te}, { E4,  Ta}, { C4,  Taah} };

NoteType JingleBellRock3[] =     
  { { G3,  Tii},  { G3,  Te}, { G3,  Ta}, { F3s, Tii}, { F3s, Te}, { F3s, Ta},      { E3,  Tii},  { F3s, Te}, { E3,  Ta}, { B2,  Taa}, { Z1,  Ti},      { E3,  Tii},  { F3s, Te}, { E3,  Ta}, { B2,  Ta}, { D3,  Ta}
  , { E3,  Tii},  { F3s, Te}, { E3,  Ta}, { C3,  Taah} };

NoteType MaryHadALittleLamb[] = { { B4, Ta},  { A4a, Ta}, { G4, Ta},  { A4a, Ta}
                                , { B4, Ta},  { B4, Ta},  { B4, Ta},  { Z1, Ta}
                                , { A4a, Ta}, { A4a, Ta}, { A4a, Ta}, { Z1, Ta}
                                , { B4, Ta},  { D5, Ta},  { D5, Ta}};


NoteType MaryHadALittleLamb2[] = { { B3, Ta},  { A3a, Ta}, { G3, Ta},  { A3a, Ta}
                                 , { B3, Ta},  { B3, Ta},  { B3, Ta},  { Z1, Ta}
                                 , { A3a, Ta}, { A3a, Ta}, { A3a, Ta}, { Z1, Ta}
                                 , { B3, Ta},  { D4, Ta},  { D4, Ta}};

NoteType MaryHadALittleLamb3[] = { { B5, Ta},  { A5a, Ta}, { G5, Ta},  { A5a, Ta}
                                 , { B5, Ta},  { B5, Ta},  { B5, Ta},  { Z1, Ta}
                                 , { A5a, Ta}, { A5a, Ta}, { A5a, Ta}, { Z1, Ta}
                                 , { B5, Ta},  { D6, Ta},  { D6, Ta}};



