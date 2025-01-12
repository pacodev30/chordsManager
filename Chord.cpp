#include "Chord.h"
#include "Data.h"
#include <cstddef>
#include <iostream>

Chord::Chord(NOTE tonal)
    : _tonal(tonal)
{
    setName();
}

Chord::~Chord()
{  }

std::string Chord::getName() const
{
    return _name;
}

void Chord::printChord() const
{
    std::cout << "---" << std::endl;
    std::cout << getName() << std::endl;
    std::cout << "Keys :" << std::endl;;
    for(auto item : _notes)
    {
        std::cout << keyToString(item.first) << " -> " << noteToString(item.second) << std::endl;
    }
}

// SETTERS
void Chord::setName()
{
    _name = tonalToString();

    if(_notes.count(TIERCE_min) && _notes.size() >= 3 && !_notes.count(QUINTE_dim)) _name += "m";
    if(_notes.count(SEPTIEME_min)) _name += "7";
    if(_notes.count(QUINTE_dim) && _notes.size() > 3) _name += "b5";
    if(_notes.count(QUINTE_dim) && _notes.size() <= 3) _name += "dim";
    if(_notes.count(SIXTE)) _name += "6";
    if(_notes.count(SEPTIEME)) _name += "7M";
    if(_notes.count(SECONDE)) _name += "9";
    if(_notes.count(SECONDE_min)) _name += "9b";
}

void Chord::addNote(KEY newKey)
{
    if(!_notes.count(newKey))
    {
        int keyNote = newKey + _tonal;
        if(keyNote > SI) {
            _notes.emplace(newKey, NOTE(keyNote - SI));
        } else {
            _notes.emplace(newKey, NOTE(keyNote));
        }
        setName();
    }
}

// TOSTRING
std::string Chord::tonalToString() const
{
    switch (_tonal)
    {
    case NOTE::DO: return "C";
    case NOTE::REb: return "Db";
    case NOTE::RE: return "D";
    case NOTE::MIb: return "Eb";
    case NOTE::MI: return "E";
    case NOTE::FA: return "F";
    case NOTE::SOLb: return "Gb";
    case NOTE::SOL: return "G";
    case NOTE::LAb: return "Ab";
    case NOTE::LA: return "A";
    case NOTE::SIb: return "Bb";
    case NOTE::SI: return "B";
    }
}

std::string Chord::keyToString(KEY key) const
{
    switch (key)
    {
    case KEY::TONIQUE: return "T";
    case KEY::SECONDE_min: return "2m";
    case KEY::SECONDE: return "2";
    case KEY::TIERCE_min: return "3m";
    case KEY::TIERCE: return "3";
    case KEY::QUARTE: return "4";
    case KEY::QUINTE: return "5";
    case KEY::QUINTE_aug: return "5aug";
    case KEY::QUINTE_dim: return "5dim";
    case KEY::SIXTE: return "6";
    case KEY::SEPTIEME_min: return "7m";
    case KEY::SEPTIEME: return "7M";
    }
}

std::string Chord::noteToString(NOTE note) const
{
    switch (note)
    {
    case NOTE::DO: return "Do";
    case NOTE::REb: return "Reb";
    case NOTE::RE: return "Re";
    case NOTE::MIb: return "Mib";
    case NOTE::MI: return "Mi";
    case NOTE::FA: return "Fa";
    case NOTE::SOLb: return "Solb";
    case NOTE::SOL: return "Sol";
    case NOTE::LAb: return "Lab";
    case NOTE::LA: return "La";
    case NOTE::SIb: return "Sib";
    case NOTE::SI: return "Si";
    }
}


