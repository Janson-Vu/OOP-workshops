#pragma once
#include "animal.h"

class vegie: public animal{
    private:
        std::string favourite_food;
        static int nextID ;

    public:
        vegie(std::string n,int v); 
        vegie();
        ~vegie();
        void set_favourite_food(std::string fav_food);
        std::string get_favourite_food();
        std::string get_name();
};