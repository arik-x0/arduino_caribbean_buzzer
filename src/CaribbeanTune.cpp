#include "../include/tunes/CaribbeanTune.h"

CaribbeanTune::CaribbeanTune(InstrumentBuzzer* instrument):
    instrument(instrument){}

CaribbeanTune::CaribbeanTune(int buzzerIO, int soundModifier=1)
{
    this->instrument = new InstrumentBuzzer(buzzerIO, soundModifier);
}

void CaribbeanTune::playSuspense()
{
    for (int i = 0; i < 3; i++)
    {
        this->instrument->playNote(Note::D_4, DurationPress::LONG - 20);
        this->instrument->playNote(Note::D_4, DurationPress::SHORT - 20);
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
            this->instrument->playNote(Note::D_4, DurationPress::SHORT - 20);
        }
    }
    this->playSuspense();
}

void CaribbeanTune::playPhase_2()
{
    for (int i = 0; i < 2; i++)
    {
        this->instrument->playNote(Note::A_3, DurationPress::SHORT);
        this->instrument->playNote(Note::C_4, DurationPress::SHORT);
        this->instrument->playNote(Note::D_4, DurationPress::LONG);
        this->instrument->playNote(Note::D_4, DurationPress::LONG);
        this->instrument->playNote(Note::D_4, DurationPress::SHORT);
        this->instrument->playNote(Note::E_4, DurationPress::SHORT);
        this->instrument->playNote(Note::F_4, DurationPress::LONG);
        this->instrument->playNote(Note::F_4, DurationPress::LONG);
        this->instrument->playNote(Note::F_4, DurationPress::SHORT);
        this->instrument->playNote(Note::G_4, DurationPress::SHORT);
        this->instrument->playNote(Note::E_4, DurationPress::LONG);
        this->instrument->playNote(Note::E_4, DurationPress::LONG);
        this->instrument->playNote(Note::D_4, DurationPress::SHORT);
        if (i == 0)
        {
            this->instrument->playNote(Note::C_4, DurationPress::SHORT);
            this->instrument->playNote(Note::C_4, DurationPress::SHORT);
            this->instrument->playNote(Note::D_4, DurationPress::LONG);
            delay(DurationPress::SHORT + 20);
        }
        else
        {
            this->instrument->playNote(Note::C_4, DurationPress::SHORT);
            this->instrument->playNote(Note::D_4, DurationPress::SHORT * 3);
        }
    }
}

void CaribbeanTune::playPhase_3()
{
    delay(DurationPress::SHORT + 40);
    this->instrument->playNote(Note::A_3, DurationPress::SHORT);
    this->instrument->playNote(Note::C_4, DurationPress::SHORT);
    this->instrument->playNote(Note::D_4, DurationPress::LONG);
    this->instrument->playNote(Note::D_4, DurationPress::LONG);
    this->instrument->playNote(Note::D_4, DurationPress::SHORT);
    this->instrument->playNote(Note::F_4, DurationPress::SHORT);
    this->instrument->playNote(Note::G_4, DurationPress::LONG);
    this->instrument->playNote(Note::G_4, DurationPress::LONG);
    this->instrument->playNote(Note::G_4, DurationPress::SHORT);
    this->instrument->playNote(Note::A_4, DurationPress::SHORT);
    this->instrument->playNote(Note::Ab_4, DurationPress::LONG);
    this->instrument->playNote(Note::Ab_4, DurationPress::LONG);
    this->instrument->playNote(Note::A_4, DurationPress::SHORT);
    this->instrument->playNote(Note::G_4, DurationPress::SHORT);
    this->instrument->playNote(Note::A_4, DurationPress::SHORT);
    this->instrument->playNote(Note::D_4, DurationPress::SHORT * 3);
    delay(DurationPress::SHORT + 40);

    this->instrument->playNote(Note::D_4, DurationPress::SHORT);
    this->instrument->playNote(Note::E_4, DurationPress::SHORT);
    this->instrument->playNote(Note::F_4, DurationPress::LONG);
    this->instrument->playNote(Note::F_4, DurationPress::LONG);
    this->instrument->playNote(Note::G_4, DurationPress::LONG);
    this->instrument->playNote(Note::A_4, DurationPress::SHORT);
    this->instrument->playNote(Note::D_4, DurationPress::LONG);

    delay(DurationPress::SHORT + 40);
    this->instrument->playNote(Note::D_4, DurationPress::SHORT);
    this->instrument->playNote(Note::F_4, DurationPress::SHORT);
    this->instrument->playNote(Note::E_4, DurationPress::LONG);
    this->instrument->playNote(Note::E_4, DurationPress::LONG);
    this->instrument->playNote(Note::F_4, DurationPress::SHORT);
    this->instrument->playNote(Note::D_4, DurationPress::SHORT);
    this->instrument->playNote(Note::E_4, DurationPress::LONG + DurationPress::SHORT);

    delay(DurationPress::SHORT + 40);
    this->instrument->playNote(Note::A_4, DurationPress::SHORT);
    this->instrument->playNote(Note::C_5, DurationPress::SHORT);
    this->instrument->playNote(Note::D_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT);
    this->instrument->playNote(Note::E_5, DurationPress::SHORT);
    this->instrument->playNote(Note::F_5, DurationPress::LONG);
    this->instrument->playNote(Note::F_5, DurationPress::LONG);
    this->instrument->playNote(Note::F_5, DurationPress::SHORT);
    this->instrument->playNote(Note::G_5, DurationPress::SHORT);
    this->instrument->playNote(Note::E_5, DurationPress::LONG);
    this->instrument->playNote(Note::E_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT);
    this->instrument->playNote(Note::C_5, DurationPress::SHORT);
    this->instrument->playNote(Note::C_5, DurationPress::SHORT);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT * 3);
    
    delay(DurationPress::SHORT + 40);
    this->instrument->playNote(Note::A_4, DurationPress::SHORT);
    this->instrument->playNote(Note::C_5, DurationPress::SHORT);
    this->instrument->playNote(Note::D_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT);
    this->instrument->playNote(Note::E_5, DurationPress::SHORT);
    this->instrument->playNote(Note::F_5, DurationPress::LONG);
    this->instrument->playNote(Note::F_5, DurationPress::LONG);
    this->instrument->playNote(Note::F_5, DurationPress::SHORT);
    this->instrument->playNote(Note::G_5, DurationPress::SHORT);
    this->instrument->playNote(Note::E_5, DurationPress::LONG);
    this->instrument->playNote(Note::E_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT);
    this->instrument->playNote(Note::C_5, DurationPress::SHORT);
    this->instrument->playNote(Note::D_5, DurationPress::LONG + DurationPress::SHORT);

    delay(DurationPress::SHORT + 40);
    this->instrument->playNote(Note::A_4, DurationPress::SHORT);
    this->instrument->playNote(Note::C_5, DurationPress::SHORT);
    this->instrument->playNote(Note::D_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT);
    this->instrument->playNote(Note::F_5, DurationPress::SHORT);
    this->instrument->playNote(Note::G_5, DurationPress::LONG);
    this->instrument->playNote(Note::G_5, DurationPress::LONG);
    this->instrument->playNote(Note::G_5, DurationPress::SHORT);
    this->instrument->playNote(Note::A_5, DurationPress::SHORT);
    this->instrument->playNote(Note::Ab_5, DurationPress::LONG);
    this->instrument->playNote(Note::Ab_5, DurationPress::LONG);
    this->instrument->playNote(Note::A_5, DurationPress::SHORT);
    this->instrument->playNote(Note::G_5, DurationPress::SHORT);
    this->instrument->playNote(Note::A_5, DurationPress::SHORT);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT * 2);

    delay(DurationPress::SHORT + 40);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT);
    this->instrument->playNote(Note::E_5, DurationPress::SHORT);
    this->instrument->playNote(Note::F_5, DurationPress::LONG);
    this->instrument->playNote(Note::F_5, DurationPress::LONG);
    this->instrument->playNote(Note::G_5, DurationPress::LONG);
    this->instrument->playNote(Note::A_5, DurationPress::SHORT);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT * 2);

    delay(DurationPress::SHORT + 40);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT);
    this->instrument->playNote(Note::F_5, DurationPress::SHORT);
    this->instrument->playNote(Note::E_5, DurationPress::LONG);
    this->instrument->playNote(Note::E_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT);
    this->instrument->playNote(Note::Db_5, DurationPress::SHORT);
    this->instrument->playNote(Note::D_5, DurationPress::LONG);
    this->instrument->playNote(Note::D_5, DurationPress::LONG);
    this->instrument->playNote(Note::E_5, DurationPress::LONG);
    this->instrument->playNote(Note::F_5, DurationPress::LONG);
    this->instrument->playNote(Note::F_5, DurationPress::SHORT);
    this->instrument->playNote(Note::F_5, DurationPress::SHORT);
    this->instrument->playNote(Note::G_5, DurationPress::LONG);
    this->instrument->playNote(Note::A_5, DurationPress::LONG*2 + DurationPress::SHORT);
    this->instrument->playNote(Note::F_5, DurationPress::SHORT);
    this->instrument->playNote(Note::D_5, DurationPress::SHORT);
    this->instrument->playNote(Note::A_4, DurationPress::SHORT);
}
