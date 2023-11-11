#include <iostream>
using namespace std;

extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float multiply_op(float left, float right);
extern float arithmetic_ops(float left, float right, float (*ops)(float, float));

int main(){

    int a=0, b=0;
    cin>>a>>b;

    cout<< arithmetic_ops(a,b,add_op) <<endl;
    cout<< arithmetic_ops(a,b,subtract_op) <<endl;
    cout<< arithmetic_ops(a,b,multiply_op) <<endl;


    return 0;
}