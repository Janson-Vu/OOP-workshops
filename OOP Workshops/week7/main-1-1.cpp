#include <iostream>
#include <string>
using namespace std;

#include "Musician.h"

int main(){

    Musician m1, m2("Clarinet", 5);

    cout<< m1.get_instrument() << "|"<< m1.get_experience()<<endl;
    cout<< m2.get_instrument() << "|"<< m2.get_experience()<<endl;

    return 0;
}