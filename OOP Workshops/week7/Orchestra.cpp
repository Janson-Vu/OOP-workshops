#include <string>
#include "Orchestra.h"

Orchestra::Orchestra(): max_size(0), count(0){
    musicians = nullptr;
}

Orchestra::Orchestra(int size): max_size(size), count(0){
    musicians = new Musician[max_size];
}

int Orchestra::get_current_number_of_members(){return count;}

bool Orchestra::has_instrument(std::string instrument){
    for (int i=0; i<count; i++){
        if (musicians[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members(){return musicians;}

bool Orchestra::add_musician(Musician new_musician){
    if (count<max_size){
        musicians[count] = new_musician;
        count++;
        return true;
    }
    return false;
}

Orchestra::~Orchestra(){
    count = 0;
    delete [] musicians;
}
