#include "../include/InstrumentBuzzer.h"

InstrumentBuzzer::InstrumentBuzzer(int buzzerIO, int soundModifier=1):
    buzzerIO(buzzerIO), soundModifier(soundModifier){}

void InstrumentBuzzer::playNote(Note note, int duration, int delayGap=0)
{
    tone(this->buzzerIO, note, duration);
    delay(duration + 80 + delayGap);
}

void InstrumentBuzzer::setModifier(int modifier)
{
    this->soundModifier = modifier;
}
