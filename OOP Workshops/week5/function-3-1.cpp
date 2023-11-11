#include <iostream>
using namespace std;

int *readNumbers(){
    int * nums = new int[3];
    for (int i=0; i<3; i++){
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