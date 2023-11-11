#include <iostream>
#include <stdio.h>
using namespace std;

extern int *readNumbers();
extern void hexDigits(int *numbers,int length);


int main(){

    int * array = readNumbers();
    hexDigits(array, 10);

    delete [] array;    

    return 0;
}