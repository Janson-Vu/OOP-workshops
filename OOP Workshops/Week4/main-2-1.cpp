#include <iostream>
using namespace std;

extern float arithmetic_ops(float left, float right, std::string op);

int main(){

    cout<< arithmetic_ops(3,2,"+") <<endl;
    cout<< arithmetic_ops(3,2,"-") <<endl;


    return 0;
}