#include <iostream>
using namespace std;
#include "zoo.h"
#include "sort_by_animalID.h"

int main(){

    zoo z1("Zootopia", 2, 3);
    animal ** animals = z1.get_animals();
    sort_by_animalID::sort(animals, 5);

    for (int i=0; i<5; i++){
        cout <<animals[i]-> get_animalID() <<endl;
    }


    return 0;
}