#include <iostream>
using namespace std;
#include "vegie.h"

int main(){

    vegie v1("Sloth", 50), v2("Donkey", 30);

    cout << v1.get_name() << endl;
    cout << v1.get_favourite_food() << endl;
    cout << v1.get_animalID() << endl;
    cout << v1.get_volume() << endl;
    
    v2.set_name("Deer");
    cout << v2.get_name() << endl;
    v2.set_favourite_food("herbs");
    cout << v2.get_favourite_food() << endl;
    cout << v2.get_animalID() << endl;
    v2.set_volume(67);
    cout << v2.get_volume() << endl;


    return 0;
}