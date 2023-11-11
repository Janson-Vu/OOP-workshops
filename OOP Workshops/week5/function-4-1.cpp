#include <iostream>
#include <algorithm>
using namespace std;

int *readNumbers(){
    int * nums = new int[4];
    for (int i=0; i<4; i++){
        cin >> nums[i];
    }
    return nums;
}

void printNumbers(int *numbers,int length){
    for (int i=0; i<length; i++){
        cout<<i<<" "<<numbers[i]<<endl;
    }
}

int secondSmallestSum(int *numbers,int length){

    int* sums = new int[length*(length-1)/2];

    int sums_num = length*(length+1)/2;


    // calculate all sub-array sums
    int count = 0; 
    for (int i=0; i<length; i++){
        int sum = 0;

        for (int j=i; j<length; j++){
            sum += numbers[j];
            sums[count] = sum;
            count++;
        }

    }

    int min = INT8_MAX, sec_min = INT8_MAX;
    for (int i=0; i<sums_num; i++){
        if (sums[i] <= min){
            sec_min = min;
            min = sums[i];
        }
        if (sums[i]<sec_min && sums[i] != min){
            sec_min = sums[i];
        }   
    }

    return sec_min;

}