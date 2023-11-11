#include <string>
#include "Musician.h"

Musician::Musician(): instrument("null"), exp(0){}

Musician::Musician(std::string instrument, int experience): 
instrument(instrument), exp(experience){}

std::string Musician::get_instrument(){return instrument;}

int Musician::get_experience(){return exp;}