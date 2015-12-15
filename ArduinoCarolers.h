// General
#define countOf(a) (sizeof(a) / sizeof(*(a))) 

// Piezo
const int piezo = 8;

// Notes
const float D6 = 1174.66;
const float C6 = 1046.50;

const float B5 =  987.77;
const float B5f =  932.33;
const float A5a = 880.00;
const float A5af = 830.61;
const float G5s =  830.61;
const float G5 =  783.99;
const float F5s = 739.99;
const float F5 = 698.46;
const float E5 =  659.25;
const float E5f =  622.25;
const float D5 = 587.33;
const float C5s = 554.37;
const float C5 = 523.25;

const float B4 = 493.88;
const float B4f = 466.16;
const float A4a = 440.00;
const float A4af = 415.30;
const float G4s = 415.30;
const float G4 = 392.00;
const float F4s = 369.99;
const float F4 = 349.23;
const float E4 =  329.63;
const float E4f =  311.13;
const float D4 = 293.66;
const float C4s = 277.18;
const float C4 = 261.63;

const float B3 = 246.94;
const float B3b = 233.08;
const float A3a = 220.00;
const float A3af = 207.65;
const float G3s = 207.65;
const float G3 = 196.00;
const float F3s = 185.00;
const float F3 = 174.61;
const float E3 =  164.81;
const float E3f =  155.56;
const float D3 = 146.83;
const float C3s = 138.59;
const float C3 = 130.81;

const float B2 = 123.47;

const float Z1 = 0.00;

const int Te = 125; // Sixteenth = semiquaver
const int Tee = 188; // Dotted sixteenth = dotted semiquaver
const int Ti = 250; // Eighth = quaver
const int Tii = 375; // Dotted Eighth = dotted quaver
const int Ta = 500; // Quarter = crotchet
const int Taa = 750; // Dotted Quarter = dotted crotchet
const int Taah = 1000; // Half note = minum
const int Taahah = 1500; // Dotted Half note = dotted minum
const int Taahahah = 2000; // Whole Note = breve


// Song
typedef struct
{
  float Note;
  int Duration;
} NoteType;

const NoteType JingleBells1[]=
  { {Z1, Taahahah},
    {B4, Ti},  {B4, Ti},  {B4, Ta},  {B4, Ti},  {B4, Ti},  {B4, Ta},                          {B4, Ti},  {D5, Ti},  {G4, Tii},  {A4a, Te},  {B4, Taah},
  // Jingle bells, Jingle bells, jingle all the way
    {C5, Ti},  {C5, Ti},  {C5, Tii},  {C5, Te},  {C5, Ti},  {B4, Ti},  {B4, Tii},  {B4, Te},  {B4, Ti},  {A4a, Ti},  {A4a, Ti},  {B4, Ti},  {A4a, Ta},  {D5, Ta},
  // Oh what fun it is to ride in a one-horse open sleigh hey
    {B4, Ti},  {B4, Ti},  {B4, Ta},  {B4, Ti},  {B4, Ti},  {B4, Ta},                          {B4, Ti},  {D5, Ti},  {G4, Tii},  {A4a, Te},  {B4, Taah},
  // Jingle bells, Jingle bells, jingle all the way
    {C5, Ti},  {C5, Ti},  {C5, Tii},  {C5, Te},  {C5, Ti},  {B4, Ti},  {B4, Ti},  {B4, Ti},   {D5, Ti},  {D5, Ti},  {C5, Ti},  {A4a, Ti},  {G4, Taah},
  // Oh what fun it is to ride in a one-horse open sleigh hey
    {D4, Ti},  {B4, Ti},  {A4a, Ti},  {G4, Ti},  {D4, Taa},  {D4, Te},  {D4, Te},            {D4, Ti},  {B4, Ti},  {A4a, Ti},  {G4, Ti},  {E4, Taah},  
  // Dashing thought the snow in a one-horse open sleigh
    {E4, Ti},  {C5, Ti},  {B4, Ti},  {A4a, Ti},  {F4s, Taah},                                 {D5, Ti},  {D5, Ti},  {C5, Ti},   {A4a, Ti},  {B4, Taah},
  // O'oer the fields we go, laughing all the way
    {D4, Ti},  {B4, Ti},  {A4a, Ti},  {G4, Ti},  {D4, Taa},  {D4, Te},  {D4, Te},            {D4, Ti},  {B4, Ti},  {A4a, Ti},  {G4, Ti},  {E4, Taah},   
  // Bells on bob-tails ring, making spirits bright
    {E4, Ti},  {C5, Ti},  {B4, Ti},  {A4a, Ti},  {D5, Ti},  {D5, Ti},  {D5, Ti},  {D5, Ti},   {E5, Ti},  {D5, Ti},  {C5, Ti},   {A4a, Ti},  {G4, Taah}
  // What fun it is to ride and sing a sleighing song tonight
  };

const NoteType JingleBells2[]=
  { {Z1, Taahahah},
    {G4, Ti},  {G4, Ti},  {G4, Ta},  {G4, Ti},  {G4, Ti},  {G4, Ta},                                {G4, Ti},  {B4, Ti},  {G4, Tii},  {G4, Te},  {G4, Taah},  
    {A4a, Ti},  {A4a, Ti},  {A4a, Tii},  {A4a, Te},  {A4a, Ti},  {G4, Ti},  {G4, Tii},  {G4, Te},   {G4, Ti},  {G4, Ti},  {G4, Ti},  {G4, Ti},  {G4, Ti},  {F4s, Ti},  {G4, Ti},  {A4a, Ti},  
    {G4, Ti},  {G4, Ti},  {G4, Ta},  {G4, Ti},  {G4, Ti},  {G4, Ta},          {G4, Ti},  {B4, Ti},  {G4, Tii},  {G4, Te},  {G4, Taah},  
    {A4a, Ti},  {A4a, Ti},  {A4a, Tii},  {A4a, Te},  {A4a, Ti},  {G4, Ti},  {G4, Ti},  {G4, Ti},    {G4, Ti},  {G4, Ti},  {F4s, Ti},  {F4s, Ti},  {G4, Taah},  
    {D4, Ti},  {D4, Ti},  {D4, Ti},  {D4, Ti},  {D4, Taa},  {D4, Te},  {D4, Te},            {D4, Ti},  {D4, Ti},  {D4, Ti},  {D4, Ti},  {C4, Taah},  
  // Dashing thought the snow in a one-horse open sleigh
    {C4, Ti},  {E4, Ti},  {E4, Ti},  {E4, Ti},  {F4s, Taah},                                 {F4s, Ti},  {F4s, Ti},  {F4s, Ti},  {F4s, Ti},  {G4, Taah},
  // O'oer the fields we go, laughing all the way
    {D4, Ti},  {D4, Ti},  {D4, Ti},  {D4, Ti},  {D4, Taa},  {D4, Te},  {D4, Te},            {D4, Ti},  {D4, Ti},  {D4, Ti},  {D4, Ti},  {C4, Taah},  
  // Bells on bob-tails ring, making spirits bright
    {C4, Ti},  {E4, Ti},  {E4, Ti},  {E4, Ti},  {F4s, Ti},  {F4s, Ti},  {F4s, Ti},  {F4s, Ti},   {F4s, Ti},  {F4s, Ti},  {F4s, Ti},   {F4s, Ti},  {G4, Taah}
  // What fun it is to ride and sing a sleighing song tonight                                           
  };

const NoteType JingleBells3[]=
  { {Z1, Taahahah},
    {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},  {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},        {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},  {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},  
    {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},  {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},        {E3, Ti},  {D3, Ti},  {C3s, Ti},  {E3, Ti},  {D3, Ta},  {E3, Ti},  {F3s, Ti},
    {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},  {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},        {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},  {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},  
    {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},  {G3, Ti},  {F3s, Ti},  {E3, Ti},  {D3, Ti},        {E3, Ti},  {E3, Ti},  {F3s, Ti},  {F3s, Ti},  {G3, Ti},  {D3, Ti},  {G3, Ta},
    {G3, Ti},  {G3, Ti},  {A3a, Ti},  {G3, Ti},  {G3, Taah},                                        {G3, Ti},  {G3, Ti},  {A3a, Ti},  {G3, Ti},  {A3a, Taah},  
  // Dashing thought the snow in a one-horse open sleigh
    {E3, Ti},  {E3, Ti},  {E3, Ti},  {A3a, Ti},  {A3a, Taah},                                       {A3a, Ti},  {G3, Ti},  {F3s, Ti},  {B3, Ti},  {B3, Taah},  
  // O'oer the fields we go, laughing all the way
     {G3, Ti},  {G3, Ti},  {A3a, Ti},  {G3, Ti},  {G3, Taah},                                       {G3, Ti},  {G3, Ti},  {A3a, Ti},  {G3, Ti},  {A3a, Taah}, 
  // Bells on bob-tails ring, making spirits bright
    {E3, Ti},  {E3, Ti},  {E3, Ti},  {A3a, Ti},  {A3a, Ti}, {A3a, Ti},  {F3s, Ti},  {F3s, Ti},      {A3a, Ti},  {G3, Ti},  {F3s, Ti},  {A3a, Ti},  {G3, Taah}  
  // What fun it is to ride and sing a sleighing song tonight                                           
  };  

NoteType MerryChristmas[]=
  { 
    {Z1, Taahahah},
    {B4, Ti},  
  };


  


  
/*NoteType JingleBellRock[] =     
  { { G5,  Tii},  { G5,  Te}, { G5,  Ta}, { F5s, Tii}, { F5s, Te}, { F5s, Ta},      { E5,  Tii},  { F5s, Te}, { E5,  Ta}, { B4,  Taa}, { Z1,  Ti},      { E5,  Tii},  { F5s, Te}, { E5,  Ta}, { B4,  Ta}, { D5,  Ta}
  , { E5,  Tii},  { F5s, Te}, { E5,  Ta}, { C5,  Taah} };

NoteType JingleBellRock2[] =     
  { { G4,  Tii},  { G4,  Te}, { G4,  Ta}, { F4s, Tii}, { F4s, Te}, { F4s, Ta},      { E4,  Tii},  { F4s, Te}, { E4,  Ta}, { B3,  Taa}, { Z1,  Ti},      { E4,  Tii},  { F4s, Te}, { E4,  Ta}, { B3,  Ta}, { D4,  Ta}
  , { E4,  Tii},  { F4s, Te}, { E4,  Ta}, { C4,  Taah} };

NoteType JingleBellRock3[] =     
  { { G3,  Tii},  { G3,  Te}, { G3,  Ta}, { F3s, Tii}, { F3s, Te}, { F3s, Ta},      { E3,  Tii},  { F3s, Te}, { E3,  Ta}, { B2,  Taa}, { Z1,  Ti},      { E3,  Tii},  { F3s, Te}, { E3,  Ta}, { B2,  Ta}, { D3,  Ta}
  , { E3,  Tii},  { F3s, Te}, { E3,  Ta}, { C3,  Taah} };

*/




