

const int BUZZER_ID = 8;

enum Notes
{
  A = 880,
  A_ = 920,
  B = 990,
  C = 534,
  D = 587,
  E = 659,
  F = 698,
  G = 784
};
enum DurationPress
{
  SHORT = 100,
  LONG = SHORT * 4
};

void playTone(int frequency, int duration, int delayGap = 0)
{
  tone(BUZZER_ID, frequency, duration);
  delay(duration + 80 + delayGap);
}

void beginningPirate()
{
  for (int i = 0; i < 3; i++)
  {
    playTone(D, LONG - 20);
    playTone(D, SHORT - 20);
  }
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

// the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(BUZZER_ID, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
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
  playPhase_2();

  delay(5000);
}
