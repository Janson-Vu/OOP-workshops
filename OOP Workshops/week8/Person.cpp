#include <string>
#include <iostream>
#include "Player.h"
#include "Person.h"

Person::Person():Player(){}

void Person::move(){
    std::string personMove = "";

    std::cin>>personMove;
    

    if (personMove != "s" && personMove!= "p" && personMove != "r"){
        std::cout<<"Invalid move. Please enter a again: ";
        std::cin >> personMove;
    }

    while (personMove != "s" && personMove!= "p" && personMove != "r"){
        std::cout<<"Invalid move. Please enter a again: ";
        std::cin >> personMove;
    }

    _moves = _moves + personMove;

}