#pragma once
#include "animal.h"

class sort_by_name{
    public:
    // sorts the array of n animals into ascending order using their names
        static void sort(animal **animals,int n);
};