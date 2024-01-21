/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int buzzerID = 8;
const int C_NOTE = 534; // DO
const int D_NOTE = 587; // RE
const int E_NOTE = 659; // MI
const int F_NOTE = 698; // FA
const int G_NOTE = 784; // Hz
const int A_NOTE = 880; // LA
const int A_PLUS_NOTE = 920; // LA+
const int B_NOTE = 988; // SI

const int longBeep = 350;
const int shortBeep = 100;

void playTone(int frequency, int duration, int delayGap = 0){
  tone(buzzerID, frequency, duration);
  delay(duration + 80 + delayGap);
}

void beginningPirate(){
    for (int i = 0; i < 3; i++)
    {
      playTone(D_NOTE, longBeep - 20);
      playTone(D_NOTE, shortBeep - 20);
    }
}

void playPhase_2(){
  for (int i = 0; i < 2; i++)
  {
    playTone(A_NOTE, shortBeep);
    playTone(C_NOTE, shortBeep);
    playTone(D_NOTE, longBeep);
    playTone(D_NOTE, longBeep);
    playTone(D_NOTE, shortBeep);
    playTone(E_NOTE, shortBeep);
    playTone(F_NOTE, longBeep);
    playTone(F_NOTE, longBeep);
    playTone(F_NOTE, shortBeep);
    playTone(G_NOTE, shortBeep);
    playTone(E_NOTE, longBeep);
    playTone(E_NOTE, longBeep);
    playTone(D_NOTE, shortBeep);
    if (i == 0)
    {
      playTone(C_NOTE, shortBeep);
      playTone(C_NOTE, shortBeep);
      playTone(D_NOTE, longBeep);
      delay(shortBeep + 20);
    }
    else
    {
      playTone(C_NOTE, shortBeep);
      playTone(D_NOTE, shortBeep * 3 );
    }
  }
}

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(buzzerID, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // phase 1
  delay(1000);
  for (int i = 0; i < 2; i++)
  {
    beginningPirate();
    for (int i = 0; i < 3; i++)
    {
      playTone(D_NOTE, shortBeep - 20);
    }
  }
  beginningPirate();
// phase 2
playPhase_2();
// phase 3
delay(shortBeep + 20);
playTone(A_NOTE, shortBeep);
playTone(C_NOTE, shortBeep);
playTone(D_NOTE, longBeep);
playTone(D_NOTE, longBeep);
playTone(D_NOTE, shortBeep);
playTone(F_NOTE, shortBeep);
playTone(G_NOTE, longBeep);
playTone(G_NOTE, longBeep);
playTone(G_NOTE, shortBeep);
playTone(A_NOTE, shortBeep);
playTone(A_PLUS_NOTE, longBeep);
playTone(A_PLUS_NOTE, longBeep);
playTone(A_NOTE, shortBeep);
playTone(G_NOTE, shortBeep);
playTone(A_NOTE, shortBeep);
playTone(D_NOTE, shortBeep * 3);
delay(shortBeep + 20);


playTone(D_NOTE, shortBeep);
playTone(E_NOTE, shortBeep);
playTone(F_NOTE, longBeep);
playTone(F_NOTE, longBeep);
playTone(G_NOTE, longBeep);
playTone(A_NOTE, shortBeep);
playTone(D_NOTE, longBeep);

delay(shortBeep + 20);
playTone(D_NOTE, shortBeep);
playTone(F_NOTE, shortBeep);
playTone(E_NOTE, longBeep);
playTone(E_NOTE, longBeep);
playTone(F_NOTE, shortBeep);
playTone(D_NOTE, shortBeep);
playTone(E_NOTE, longBeep + shortBeep);


delay(shortBeep + 20);
playPhase_2();

delay(5000);
}

