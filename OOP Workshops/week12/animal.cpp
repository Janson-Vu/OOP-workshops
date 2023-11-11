#include "animal.h"

animal::animal(std::string n, int v){
    name = n;
    volume = v;
}

animal::animal(){}

animal::~animal(){}

void animal::set_name(std::string the_name){
    name = the_name;
}

void animal::set_volume(int the_volume){
    volume = the_volume;
}

int animal::get_animalID(){return animalID;}

int animal::get_volume(){return volume;}
