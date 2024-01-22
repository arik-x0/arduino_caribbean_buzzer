#include "include/tunes/CaribbeanTune.h"

CaribbeanTune* tuner;

// the setup function runs once when you press reset or power the board
void setup()
{
  tuner = new CaribbeanTune(BUZZER_IO);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  tuner->playPhase_1();
  for (;;)
  {
    tuner->playPhase_2();
    tuner->playPhase_3();
  }
}
