#include <iostream>

int main(){

    double nums[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    double * p_nums = nullptr;

    for (int r=0; r<3; r++){
        for (int c=0; c<3; c++){
            p_nums = *(nums + r) + c;// NOTE that it is different to (*nums + r) + c = *nums + r +c
            std::cout << *p_nums << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}