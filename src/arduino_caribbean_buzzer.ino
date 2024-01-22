#include "Constant.h";

void playTone(int frequency, int duration, int delayGap = 0)
{
  tone(BUZZER_ID, frequency, duration);
  delay(duration + 80 + delayGap);
}

void playPhase_2()
{
  for (int i = 0; i < 2; i++)
  {
    playTone(A, SHORT);
    playTone(C, SHORT);
    playTone(D, LONG);
    playTone(D, LONG);
    playTone(D, SHORT);
    playTone(E, SHORT);
    playTone(F, LONG);
    playTone(F, LONG);
    playTone(F, SHORT);
    playTone(G, SHORT);
    playTone(E, LONG);
    playTone(E, LONG);
    playTone(D, SHORT);
    if (i == 0)
    {
      playTone(C, SHORT);
      playTone(C, SHORT);
      playTone(D, LONG);
      delay(SHORT + 20);
    }
    else
    {
      playTone(C, SHORT);
      playTone(D, SHORT * 3);
    }
  }
}

void beginningPirate()
{
  for (int i = 0; i < 3; i++)
  {
    playTone(D, LONG - 20);
    playTone(D, SHORT - 20);
  }
}

void playPhase_1()
{
  // phase 1
  delay(1000);
  for (int i = 0; i < 2; i++)
  {
    beginningPirate();
    for (int i = 0; i < 3; i++)
    {
      playTone(D, SHORT - 20);
    }
  }
  beginningPirate();
}

// the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(BUZZER_ID, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  playPhase_1();

  for (;;){
    // phase 2
    playPhase_2();
    // phase 3
    delay(SHORT + 20);
    playTone(A, SHORT);
    playTone(C, SHORT);
    playTone(D, LONG);
    playTone(D, LONG);
    playTone(D, SHORT);
    playTone(F, SHORT);
    playTone(G, LONG);
    playTone(G, LONG);
    playTone(G, SHORT);
    playTone(A, SHORT);
    playTone(A_, LONG);
    playTone(A_, LONG);
    playTone(A, SHORT);
    playTone(G, SHORT);
    playTone(A, SHORT);
    playTone(D, SHORT * 3);
    delay(SHORT + 20);

    playTone(D, SHORT);
    playTone(E, SHORT);
    playTone(F, LONG);
    playTone(F, LONG);
    playTone(G, LONG);
    playTone(A, SHORT);
    playTone(D, LONG);

    delay(SHORT + 20);
    playTone(D, SHORT);
    playTone(F, SHORT);
    playTone(E, LONG);
    playTone(E, LONG);
    playTone(F, SHORT);
    playTone(D, SHORT);
    playTone(E, LONG + SHORT);

    delay(SHORT + 20);
  }
}
