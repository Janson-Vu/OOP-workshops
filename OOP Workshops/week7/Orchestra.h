#pragma once
#include <string>
#include "Musician.h"

class Orchestra{
    private:
        int max_size;
        int count;
        Musician * musicians;
    public:
        Orchestra();           // default constructor
        Orchestra(int size);   // constructor for an orchestra of given size
        int get_current_number_of_members(); // returns the number of musicians who have joined the orchestra
        bool has_instrument(std::string instrument); // returns true if any musician in the orchestra plays the specified instrument, otherwise returns false
        Musician *get_members();        // returns the array of members of the orchestra
        bool add_musician(Musician new_musician); // returns true and adds new musician to the orchestra if the orchestra is not full, otherwise returns false
        ~Orchestra();

};