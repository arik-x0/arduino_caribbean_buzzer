#ifndef INSTRUMENTBUZZER_H
#define INSTRUMENTBUZZER_H

#include "Constant.h"
#include "Arduino.h"

/**
 * Instrument class which simulates the usages of musical instrument,
 * but with a simple buzzer.
 * It handles the configurations to make the buzzer be audible to human ear.
 * Can handle multiple configurations such as the PWD and Arduino usage.
*/
class InstrumentBuzzer{
    private:
        /**
         * This is the I/O port located in the Arduino board.
         * The purpose is to send voltage to the buzzer via jumping wires.
        */
        int buzzerIO;
        /**
         * The sound modifier for the musical note frequency.
         * Created in case to change the sound of buzzer to be more appealing to the human ear.
        */
        int soundModifier;

    public:
        /**
         * Constructor of the class.
         * Only initializes values that are related to the hardware of the project.
         * 
         * @param buzzerIO being the Arduino port that can stream output or input in
         * @param soundModifier frequency modifier for the musical notes
        */
        InstrumentBuzzer(int buzzerIO, int soundModifier=1);
        /**
         * The copy constructor of the class, copies the values of the other object.
         * Creates an object with the same values but separate entity.
         * 
         * @param other is the object that we copy the data from
        */
        InstrumentBuzzer(const InstrumentBuzzer& other);
        /**
         * Plays a tone uses the built in library of Arduino called "Tone.cpp"
         * which plays a frequency from the buzzer in set duration that you give it.
         * After the method finishes playing the tone it has a delay to prevent from method "tone"
         * from overlapping with other "tone" players.
         * 
         * "tone" runs on a separate thread so the code will continue to run while tone is playing.
         * the delay method prevents the overlap and also gives extra silence gap if wanted.
         * 
         * @param note being the musical note from the enum list in Constant.h
         * @param duration being how long the tone is played in the buzzer
         * @param delayGap being the silence after the played tone that wanted to add
        */
        void playNote(Note note, int duration, int delayGap=0);
        /**
         * setter method that changes the modifier of the frequency of the buzzer.
         * the default value is 1.
         * 
         * @param modifier is the multiplier frequency of the playing buzzer
         * either to make the buzzer sound higher pitch or lower pitch
        */
        void setModifier(int modifier);
};

#endif // INSTRUMENTBUZZER_H