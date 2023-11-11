#include <string>
#include "Player.h"

Player::Player(){
    _moves = "";
}

std::string Player::getMoves(){return _moves;}

char Player::getMove(){return _moves[_moves.length()-1];}

bool Player::win(Player * opponent){
    char myMove = this -> getMove();
    char opponentMove = opponent -> getMove();
    bool win = false;

    if (myMove == opponentMove){
        return win;
    }
    // 'p' < 'r' < 's' (ASCII value)
    // BUT p (paper) beats s (scissors)
    if (myMove == 'p' && opponentMove == 's'){
        win = false;
        return win;
    }
    if (myMove == 's' && opponentMove =='p'){
        win = true;
        return win;
    }
     
    if (myMove < opponentMove){
        win = true;
    }else if (myMove > opponentMove){
        win = false;
    }
    return win;
}