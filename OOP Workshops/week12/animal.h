#pragma once
#include <string>

class animal{
    protected:
        std::string name;
        int animalID;
        int volume;
    public:
        animal(std::string n, int v);
        animal();
        ~animal();
        void set_name(std::string the_name);
        void set_volume(int the_volume);
        
        virtual std::string get_name() = 0;
        int get_animalID();
        int get_volume();
};