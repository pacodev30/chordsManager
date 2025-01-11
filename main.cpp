#include "Chord.h"
#include "Data.h"


int main()
{
    Chord g(NOTE::DO, TYPE::MAJOR);
    g.addNote(TONIQUE);
    g.addNote(TIERCE);
    g.addNote(QUINTE);

    g.printChord();

    return 0;
}
