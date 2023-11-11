#include <string>
#include "Player.h"
#include "Computer.h"

Computer::Computer(std::string letter){
    _defaultMove = letter;
    _nMoves = 0;
}

Computer::Computer():Computer("r"){}

void Computer::move(){
    _moves = _moves + _defaultMove;
    _nMoves++;
}




