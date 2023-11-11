#include <iostream>

int main(){

    int num = 42;
    int * p_num = &num;

    *p_num += 5;
    std::cout<< *p_num<<std::endl;
    *p_num -= 2;
    std::cout<< *p_num<<std::endl;


    return 0;
}