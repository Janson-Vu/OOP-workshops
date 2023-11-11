#pragma once
#include "animal.h"
#include "hunter.h"
#include "vegie.h"

class zoo{
    private:
        std::string name ;                          
        int number_of_animals ;                
        animal **animals ;  
    public:
        zoo(std::string n,int cows,int lions);
        zoo();
        std::string get_name();
        int get_number_of_animals();
        animal** get_animals();
        ~zoo();

};