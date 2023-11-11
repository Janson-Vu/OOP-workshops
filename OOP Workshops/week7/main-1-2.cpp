#include <string>
#include <iostream>
using namespace std;

#include "Musician.h"
#include "Orchestra.h"

int main(){

    Musician m1,m2("Violin", 3), m3("Clarinet",20), m4, m5("Cello",10);
    Orchestra orch1, orch2(3);

    if (orch2.add_musician(m1)){
        cout<< "A musician is added to the orchestra."<<endl;
    }else{
        cout<< "Orchestra is full. Cannot add more musician."<<endl;
    }

    if (orch2.add_musician(m2)){
        cout<< "A musician is added to the orchestra."<<endl;
    }else{
        cout<< "Orchestra is full. Cannot add more musician."<<endl;
    }

    if (orch2.add_musician(m3)){
        cout<< "A musician is added to the orchestra."<<endl;
    }else{
        cout<< "Orchestra is full. Cannot add more musician."<<endl;
    }

    if (orch2.add_musician(m4)){
        cout<< "A musician is added to the orchestra."<<endl;
    }else{
        cout<< "Orchestra is full. Cannot add more musician."<<endl;
    }


    if (orch1.add_musician(m5)){
        cout<< "A musician is added to the orchestra."<<endl;
    }else{
        cout<< "Orchestra is full. Cannot add more musician."<<endl;
    }

    Musician* muse = orch2.get_members();

    cout<<"Members of orch2:"<<endl;
    for (int i=0; i<orch2.get_current_number_of_members(); i++){
        cout<< muse[i].get_instrument() <<"|"<<muse[i].get_experience()<<endl;
    }

    return 0;
}