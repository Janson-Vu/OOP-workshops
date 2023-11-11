#pragma once
#include "animal.h"

class hunter: public animal{
    private:
        int kills;
        static int nextID;

    public:
        hunter(std::string n, int v);
        hunter();
        ~hunter();
        void set_kills(int num_kill);
        int get_kills();
        std::string get_name();

};