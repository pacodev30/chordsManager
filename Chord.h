#pragma once
#include "Data.h"
#include <string>
#include <map>

class Chord
{
public:
    Chord(NOTE tonal, TYPE type, std::string color = "");
    ~Chord();

    // GETTERS
    std::string tonalToString(NOTE tonal) const;
    std::string typeToString(TYPE type) const;
    std::string keyToString(KEY key) const;
    std::string noteToString(NOTE note) const;

    void printChord() const;

    // SETTERS
    void addNote(KEY key);

protected:
    NOTE _tonal;
    TYPE _Type;
    std::string _color;

    NOTE _note;
    std::map<KEY, NOTE> _notes;
};
