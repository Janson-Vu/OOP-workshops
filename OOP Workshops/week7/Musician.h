#pragma once
#include <string>

class Musician{
    private:
        std::string instrument;
        int exp;
    public:
        Musician();                                     // a default constructor  
        Musician(std::string instrument, int experience); // a constructor that takes the instrument played and the years of experience
        std::string get_instrument();    // returns the instrument played
        int get_experience();       // returns the number of years experience
};