#ifndef CARIBBEANTUNE_H
#define CARIBBEANTUNE_H

#include "../InstrumentBuzzer.h"
class CaribbeanTune{
    private:
        InstrumentBuzzer* instrument;
        void playSuspense();
    public:
        CaribbeanTune(InstrumentBuzzer* instrument);
        CaribbeanTune(int buzzerIO, int soundModifier=1);
        ~CaribbeanTune();
        CaribbeanTune(const CaribbeanTune& other);
        CaribbeanTune& operator=(const CaribbeanTune& other);

        void playPhase_1();
        void playPhase_2();
        void playPhase_3();
};

#endif // CARIBBEANTUNE_H