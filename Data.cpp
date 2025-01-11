#pragma once

#include "Data.h"



std::string Dat::tonalToString() const
{
    switch (_tonal) {
    case Data::NOTE::DO: return "C";
    case Data::NOTE::REb: return "D";
    case Data::NOTE::RE: return "D";
    case Data::NOTE::MIb: return "Eb";
    case Data::NOTE::MI: return "E";
    case Data::NOTE::FA: return "F";
    case Data::NOTE::SOLb: return "Gb";
    case Data::NOTE::SOL: return "G";
    case Data::NOTE::LAb: return "Ab";
    case Data::NOTE::LA: return "A";
    case Data::NOTE::SIb: return "Bb";
    case Data::NOTE::SI: return "B";
    }
}

std::string Dat::typeToString() const
{
    switch (_Type) {
    case Data::TYPE::MAJOR: return "M";
    case Data::TYPE::MINOR: return "m";
    case Data::TYPE::DOM7: return "7";
    }
}
