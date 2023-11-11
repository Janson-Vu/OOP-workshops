#include <iostream>
using namespace std;

int *readNumbers(){
    int * nums = new int[10];
    for (int i=0; i<10; i++){
        cin >> nums[i];
    }
    return nums;
}

bool equalsArray(int *numbers1,int *numbers2,int length){

    if (length<1){
        return false;
    }

    for (int i=0; i<length; i++){
        if (numbers1[i] != numbers2[i]){
            return false;
        }
            
    }
    return true;
}

int *reverseArray(int *numbers1,int length){

    int * reversed = new int[length];
    for (int i=0; i<length; i++){
        reversed[i] = numbers1[length-i];
    }

    return reversed;
}