#include "CaribbeanTune.h";

CaribbeanTune::CaribbeanTune(InstrumentBuzzer* instrument):
    instrument(instrument){}

CaribbeanTune::CaribbeanTune(int buzzerIO, int soundModifier)
{
    this->instrument = new InstrumentBuzzer(buzzerIO, soundModifier);
}

void CaribbeanTune::playSuspense()
{
    for (int i = 0; i < 3; i++)
    {
        this->instrument->playNote(Note::D, DurationPress::LONG - 20);
        this->instrument->playNote(Note::D, DurationPress::SHORT - 20);
    }
}

void CaribbeanTune::playPhase_1()
{
    delay(1000);
    for (int i = 0; i < 2; i++)
    {
        this->playSuspense();
        for (int i = 0; i < 3; i++)
        {
            this->instrument->playNote(Note::D, DurationPress::SHORT - 20);
        }
    }
    this->playSuspense();
}

void CaribbeanTune::playPhase_2()
{
    for (int i = 0; i < 2; i++)
    {
        this->instrument->playNote(Note::A, DurationPress::SHORT);
        this->instrument->playNote(Note::C, DurationPress::SHORT);
        this->instrument->playNote(Note::D, DurationPress::LONG);
        this->instrument->playNote(Note::D, DurationPress::LONG);
        this->instrument->playNote(Note::D, DurationPress::SHORT);
        this->instrument->playNote(Note::E, DurationPress::SHORT);
        this->instrument->playNote(Note::F, DurationPress::LONG);
        this->instrument->playNote(Note::F, DurationPress::LONG);
        this->instrument->playNote(Note::F, DurationPress::SHORT);
        this->instrument->playNote(Note::G, DurationPress::SHORT);
        this->instrument->playNote(Note::E, DurationPress::LONG);
        this->instrument->playNote(Note::E, DurationPress::LONG);
        this->instrument->playNote(Note::D, DurationPress::SHORT);
        if (i == 0)
        {
            this->instrument->playNote(Note::C, DurationPress::SHORT);
            this->instrument->playNote(Note::C, DurationPress::SHORT);
            this->instrument->playNote(Note::D, DurationPress::LONG);
            delay(DurationPress::SHORT + 20);
        }
        else
        {
            this->instrument->playNote(Note::C, DurationPress::SHORT);
            this->instrument->playNote(Note::D, DurationPress::SHORT * 3);
        }
    }
}

void CaribbeanTune::playPhase_3()
{
    delay(DurationPress::SHORT + 20);
    this->instrument->playNote(Note::A, DurationPress::SHORT);
    this->instrument->playNote(Note::C, DurationPress::SHORT);
    this->instrument->playNote(Note::D, DurationPress::LONG);
    this->instrument->playNote(Note::D, DurationPress::LONG);
    this->instrument->playNote(Note::D, DurationPress::SHORT);
    this->instrument->playNote(Note::F, DurationPress::SHORT);
    this->instrument->playNote(Note::G, DurationPress::LONG);
    this->instrument->playNote(Note::G, DurationPress::LONG);
    this->instrument->playNote(Note::G, DurationPress::SHORT);
    this->instrument->playNote(Note::A, DurationPress::SHORT);
    this->instrument->playNote(Note::A_, DurationPress::LONG);
    this->instrument->playNote(Note::A_, DurationPress::LONG);
    this->instrument->playNote(Note::A, DurationPress::SHORT);
    this->instrument->playNote(Note::G, DurationPress::SHORT);
    this->instrument->playNote(Note::A, DurationPress::SHORT);
    this->instrument->playNote(Note::D, DurationPress::SHORT * 3);
    delay(DurationPress::SHORT + 20);

    this->instrument->playNote(Note::D, DurationPress::SHORT);
    this->instrument->playNote(Note::E, DurationPress::SHORT);
    this->instrument->playNote(Note::F, DurationPress::LONG);
    this->instrument->playNote(Note::F, DurationPress::LONG);
    this->instrument->playNote(Note::G, DurationPress::LONG);
    this->instrument->playNote(Note::A, DurationPress::SHORT);
    this->instrument->playNote(Note::D, DurationPress::LONG);

    delay(DurationPress::SHORT + 20);
    this->instrument->playNote(Note::D, DurationPress::SHORT);
    this->instrument->playNote(Note::F, DurationPress::SHORT);
    this->instrument->playNote(Note::E, DurationPress::LONG);
    this->instrument->playNote(Note::E, DurationPress::LONG);
    this->instrument->playNote(Note::F, DurationPress::SHORT);
    this->instrument->playNote(Note::D, DurationPress::SHORT);
    this->instrument->playNote(Note::E, DurationPress::LONG + DurationPress::SHORT);

    delay(DurationPress::SHORT + 20);
}
