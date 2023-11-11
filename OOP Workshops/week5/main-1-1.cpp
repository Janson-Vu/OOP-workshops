#include <iostream>
using namespace std;

extern int *readNumbers();
void printNumbers(int *numbers,int length);


int main(){

    int * array = readNumbers();
    printNumbers(array, 10);

    delete [] array;

    return 0;
}

