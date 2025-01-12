#include "ChordManager.h"
#include <iostream>

ChordManager::ChordManager()
{}

ChordManager::~ChordManager()
{
    for (auto chord : _chords)
    {
        std::cout << chord->getName() << " deleted" << std::endl;
        delete chord;
        chord = nullptr;
    }
}

void ChordManager::printChords() const
{
    for (auto chord : _chords)
    {
        std::cout << chord->getName() << std::endl;
    }
}

void ChordManager::addChord(Chord* chord)
{
    _chords.emplace_back(chord);
}
