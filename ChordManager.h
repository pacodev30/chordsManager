#pragma once
#include "Chord.h"
#include <vector>

class ChordManager
{
public:
    ChordManager();
    ~ChordManager();

    void printChords() const;
    void addChord(Chord* chord);

private:
    std::vector<Chord*> _chords;
};
