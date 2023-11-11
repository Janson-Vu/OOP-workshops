#pragma once
#include <string>
#include "Player.h"

class Computer: public Player{
    private:
        int _nMoves;
        std::string _defaultMove;

    public:
        Computer(std::string letter);
        Computer();
        void move();
};