#include <iostream>
using namespace std;

int *readNumbers(){
    int * nums = new int[10];
    for (int i=0; i<10; i++){
        cin >> nums[i];
    }
    return nums;
}

void hexDigits(int *numbers,int length){

    for (int i=0; i<length; i++){
        if (numbers[i] >=0 && numbers[i]<= 9){
            cout<<i<<" "<<numbers[i] <<" " <<numbers[i]<<endl;
        }else if (numbers[i] >= 10 && numbers[i] <= 15){
            switch (numbers[i]) {
                case 10:
                    cout<< i <<" "<<numbers[i] <<" "<<"A"<<endl;
                    break;
                case 11:
                    cout<< i <<" "<<numbers[i] <<" "<<"B"<<endl;
                    break;
                case 12:
                    cout<< i <<" "<<numbers[i] <<" "<<"C"<<endl;
                    break;
                case 13:
                    cout<< i <<" "<<numbers[i] <<" "<<"D"<<endl;
                    break;
                case 14:
                    cout<< i <<" "<<numbers[i] <<" "<<"E"<<endl;
                    break;
                case 15:
                    cout<< i <<" "<<numbers[i] <<" "<<"F"<<endl;
                    break;
                default:
                    break;  
            }
        }    
    }
}
        



