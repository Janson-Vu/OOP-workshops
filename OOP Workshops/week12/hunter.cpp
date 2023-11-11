#include "hunter.h"

int hunter::nextID = 1000;

hunter::hunter(std::string n, int v){
    name = n;
    volume = v;
    kills = 0;
    animalID = nextID;
    nextID++;
}
hunter::hunter(){}

hunter::~hunter(){}

void hunter::set_kills(int num_kill){
    kills = num_kill;
}

int hunter::get_kills(){
    return kills;
}

std::string hunter::get_name(){
    return "Hunter: " + name;
}