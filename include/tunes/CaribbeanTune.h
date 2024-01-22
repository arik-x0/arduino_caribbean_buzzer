#include "Constant.h"
#include "InstrumentBuzzer.h"

class CaribbeanTune{
    private:
        InstrumentBuzzer* instrument;
        void playSuspense();
    public:
        CaribbeanTune(InstrumentBuzzer* instrument);
        CaribbeanTune(int buzzerIO, int soundModifier);
        void playPhase_1();
        void playPhase_2();
        void playPhase_3();

};