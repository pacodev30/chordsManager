#include "Chord.h"
#include "Data.h"


int main()
{
    Chord M69(NOTE::DO);
    M69.addNote(SECONDE);
    M69.addNote(TIERCE);
    M69.addNote(SIXTE);
    M69.addNote(QUINTE);
    M69.printChord();

    // Chord m7(NOTE::RE);
    // m7.addNote(TONIQUE);
    // m7.addNote(TIERCE_min);
    // m7.addNote(QUINTE);
    // m7.addNote(SEPTIEME_min);
    // m7.printChord();

    // Chord M7(NOTE::MI);
    // M7.addNote(TONIQUE);
    // M7.addNote(TIERCE);
    // M7.addNote(QUINTE);
    // M7.addNote(SEPTIEME_min);
    // M7.printChord();

    // Chord M(NOTE::FA);
    // M.addNote(TONIQUE);
    // M.addNote(TIERCE);
    // M.addNote(QUINTE);
    // M.printChord();

    // Chord m(NOTE::LA);
    // m.addNote(TONIQUE);
    // m.addNote(TIERCE_min);
    // m.addNote(QUINTE);
    // m.addNote(SIXTE);
    // m.printChord();

    // Chord semDim(NOTE::SI);
    // semDim.addNote(TONIQUE);
    // semDim.addNote(TIERCE_min);
    // semDim.addNote(QUINTE_dim);
    // semDim.addNote(SEPTIEME_min);
    // semDim.printChord();

    // Chord dim(NOTE::REb);
    // dim.addNote(TONIQUE);
    // dim.addNote(TIERCE_min);
    // dim.addNote(QUINTE_dim);
    // dim.printChord();


    return 0;
}
