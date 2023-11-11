#include "vegie.h"

int vegie::nextID = 100;

vegie::vegie(std::string n, int v){
    name = n;
    volume = v;
    favourite_food = "grass";
    animalID = nextID;
    nextID++;
}

vegie::vegie(){}

vegie::~vegie(){}

void vegie::set_favourite_food(std::string fav_food){
    favourite_food = fav_food;
}

std::string vegie::get_favourite_food(){
    return favourite_food;
}

std::string vegie::get_name(){
    return "Safe: " + name;
}