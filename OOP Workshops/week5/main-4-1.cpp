#include <iostream>
using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);

int main(){

    int *nums = readNumbers();
    int length = 4;
    cout << "second: "<<secondSmallestSum(nums, length) <<endl;
    

    delete [] nums;

    return 0;
}