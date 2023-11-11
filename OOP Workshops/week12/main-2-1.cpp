#include <iostream>
#include <string>
using namespace std;
#include "animal.h"
#include "hunter.h"


int main(){

    hunter h1("Wolf", 130), h2("Tiger", 150);
    cout <<h1.get_name() <<endl;
    cout <<h1.get_volume() <<endl;
    h1.set_kills(2);
    cout <<h1.get_kills() << endl;
    cout << h1.get_animalID()<<endl;

    h2.set_name("Fox");
    cout <<h2.get_name() <<endl;
    h2.set_volume(29);
    cout <<h2.get_volume() <<endl;
    h2.set_kills(23);
    cout << h2.get_kills() << endl;
    cout << h2.get_animalID()<<endl;
    
    

    return 0;
}