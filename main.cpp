#include "Chord.h"
#include "ChordManager.h"
#include "Data.h"


int main()
{

    Chord M7M(NOTE::DO);
    M7M.addNote(TONIQUE);
    M7M.addNote(TIERCE);
    M7M.addNote(QUINTE);
    M7M.addNote(SEPTIEME);
    M7M.printChord();


    Chord m7(NOTE::RE);
    m7.addNote(TONIQUE);
    m7.addNote(TIERCE_min);
    m7.addNote(QUINTE);
    m7.addNote(SEPTIEME_min);
    m7.printChord();


    Chord m(NOTE::MI);
    m.addNote(TONIQUE);
    m.addNote(TIERCE_min);
    m.addNote(QUINTE);
    m.printChord();

    Chord M(NOTE::FA);
    M.addNote(TONIQUE);
    M.addNote(TIERCE);
    M.addNote(QUINTE);
    M.printChord();

    Chord dom7(NOTE::SOL);
    dom7.addNote(TONIQUE);
    dom7.addNote(TIERCE);
    dom7.addNote(QUINTE);
    dom7.addNote(SEPTIEME_min);
    dom7.printChord();

    Chord m6(NOTE::LA);
    m6.addNote(TONIQUE);
    m6.addNote(TIERCE_min);
    m6.addNote(QUINTE);
    m6.addNote(SIXTE);
    m6.printChord();

    Chord m7b5(NOTE::SI);
    m7b5.addNote(TONIQUE);
    m7b5.addNote(TIERCE_min);
    m7b5.addNote(QUINTE_dim);
    m7b5.addNote(SEPTIEME_min);
    m7b5.printChord();

    Chord dim(NOTE::REb);
    dim.addNote(TONIQUE);
    dim.addNote(TIERCE_min);
    dim.addNote(QUINTE_dim);
    dim.printChord();


    return 0;
}
