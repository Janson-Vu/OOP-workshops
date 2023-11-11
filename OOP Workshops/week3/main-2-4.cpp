#include <iostream>

int main(){

    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(nums)/sizeof(int);
    int *p_num = nums;

    for (int i=0; i<length; i++){
        p_num = nums + i;
        std::cout<< *p_num <<std::endl;
    }

    return 0;
}