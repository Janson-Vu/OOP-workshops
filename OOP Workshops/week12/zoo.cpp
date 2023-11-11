#include "zoo.h"

zoo::zoo(std::string n, int cows, int lions){
    name = n;
    number_of_animals = cows + lions;
    animals = new animal*[number_of_animals];

    // create cows 
    int cows_index_end = 0;
    for (int i=0; i<cows; i++){
        animals[i] = new vegie("Daisy", 100);
        cows_index_end = i;
    }
    
    // create lions
    for (int i=cows_index_end+1; i<cows_index_end + lions +1; i++){
        animals[i] = new hunter("Clarence", 50);
    }
}

zoo::zoo(){}

zoo::~zoo(){
    
    // for (int i=0; i<number_of_animals; i++){
    //     // if (animals[i] -> get_name() == "Hunter: Clarence"){
    //     //     animals[i] -> ~hunter();
    //     // }else if (animals[i] -> get_name() == "Safe: Daisy"){
    //     //     animals[i] -> ~vegie();
    //     // }
    //     delete [] animals[i]; // destruct animals
    // }
    delete [] animals;
}

std::string zoo::get_name(){
    return name;
}

int zoo::get_number_of_animals(){
    return number_of_animals;
}

animal** zoo::get_animals(){
    return animals;
}