#pragma once
#include <string>
class Player{
    protected:
        std::string _moves;
    public:
        Player();
        virtual void move() = 0;
        std::string getMoves();
        char getMove(); //returns the most recent move made
        bool win(Player * opponent); //compares players’ moves to see who wins
};