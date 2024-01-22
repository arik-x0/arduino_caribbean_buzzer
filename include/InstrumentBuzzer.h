#include "Constant.h"
#include "Arduino.h"

class InstrumentBuzzer{
    private:
        int buzzerIO;
        int soundModifier;

    public:
        InstrumentBuzzer(int buzzerID, int soundModifier=1);
        void playNote(Notes note, int duration, int delayGap=0);
        void setModifier(int modifier);
};