#include <iostream>
using namespace std;

extern int size_of_variable_star_arr();

int main(){

    int size = size_of_variable_star_arr();

    cout <<size << endl;

    return 0;

}