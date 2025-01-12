#pragma once
#include "Data.h"
#include <string>
#include <map>

class Chord
{
public:
    Chord(NOTE tonal);
    ~Chord();

    std::string getName() const;

    std::string tonalToString() const;
    std::string keyToString(KEY key) const;
    std::string noteToString(NOTE note) const;

    void printChord() const;

    void setName();
    void addNote(KEY key);

protected:
    std::string _name;
    NOTE _tonal;
    std::string _color;


    NOTE _note;
    std::map<KEY, NOTE> _notes;
};
