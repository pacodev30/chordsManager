#include "Chord.h"
#include "Data.h"
#include <iostream>

Chord::Chord(NOTE tonal, TYPE type, std::string color)
    : _tonal(tonal), _Type(type), _color(color)
{  }

Chord::~Chord()
{  }

void Chord::printChord() const
{
    std::cout << "---" << std::endl;
    std::cout << tonalToString(_tonal) << typeToString(_Type) << _color << std::endl;
    std::cout << "Keys :" << std::endl;;
    for(auto item : _notes)
    {

        std::cout << keyToString(item.first) << " -> " << noteToString(item.second) << std::endl;
    }
}

// SETTERS
void Chord::addNote(KEY newKey)
{
    int keyNote = newKey + _tonal;
    if(keyNote > SI) {
        _notes.insert({newKey, NOTE(keyNote - SI)});
    } else {
        _notes.insert({newKey, NOTE(keyNote)});
    }
}

// TOSTRING
std::string Chord::tonalToString(NOTE tonal) const
{
    switch (tonal)
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

std::string Chord::typeToString(TYPE type) const
{
    switch (type)
    {
        case TYPE::MAJOR: return "M";
        case TYPE::MINOR: return "m";
        case TYPE::DOM7: return "7";
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
    case KEY::SEPTIEME: return "7";
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


