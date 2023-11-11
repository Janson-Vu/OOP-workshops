#pragma once
#include <string>
#include "Player.h"

class Person: public Player{
    public:
        Person();
        //allow user to type in a single character to
        //represent their move. If a move is impossible,
        //“Move unavailable” is outputted and the user is
        //asked to input a character again.
        //Otherwise, their input is stored
        void move();                       
};