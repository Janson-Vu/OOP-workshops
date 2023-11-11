#include <iostream>
using namespace std;


extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);


int main(){

    int length = 10;

    int* nums = readNumbers();
    int* reversed_nums = reverseArray(nums, length);

    if (equalsArray(nums, reversed_nums, 10)){
        cout<< "true" <<endl;
    }else{
        cout<< "false" <<endl;
    }

    delete [] nums, reversed_nums;

    return 0;
}