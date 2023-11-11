#include <iostream>
using namespace std;


extern int *readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(){

    int *nums1 = readNumbers();
    int *nums2 = readNumbers();

    if (equalsArray(nums1, nums2, 3)){
        cout<< "true" <<endl;
    }else{
        cout<< "false" <<endl;
    }
    

    delete [] nums1, nums2;

    return 0;
}