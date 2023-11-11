#include <iostream>
#include <string.h>
using namespace std;

bool compareResult(char digits1[], char digits2[]){
    for (int i=0; i<strlen(digits1); i++){
        if (digits1[i] != digits2[i]){
            return false;
        }
    }
    return true;
}

void printDigit(char digits[]){

    for (int i=0; i<strlen(digits); i++){
        cout<< digits[i];
    }
    cout<<"\n";
}

char* alignDigits(char bin1[], char bin2[]){
    int len1 = strlen(bin1), len2 = strlen(bin2);

    // align binary numbers so that binary arithmetic can be done
    if (len1>len2){
        // copy to bin2 to new array bin2_new
        int count = 0;
        char *bin2_new = nullptr;
        bin2_new = new char[len1];
        for (int i=0; i<len1; i++){
            if (i >= (len1-1) - (len2-1)){
                bin2_new[i] = bin2[count];
                count++;
            }else{
                bin2_new[i] = '0';
            }
        }
        return bin2_new;

    }else if (len1 < len2){
        // copy bin1 to new array bin1_new
        int count = 0;
        char *bin1_new = nullptr;
        bin1_new = new char[len2];
        for (int i=0; i<len2; i++){
            if (i >= (len2-1) - (len1-1)){
                bin1_new[i] = bin1[count];
                count++;
            }else{
                bin1_new[i] = '0';
            }
        }
        return bin1_new;
    }
    return nullptr;

}

char* add(char bin1[], char  bin2[]){

    int len1 = strlen(bin1), len2 = strlen(bin2);
    char *bin2_new = nullptr, *bin1_new = nullptr;
    char *res = nullptr;

    // align digits for addition
    if (len1>len2){
        bin2_new = alignDigits(bin1, bin2);
    }else if (len2 > len1){
        bin1_new = alignDigits(bin1, bin2);
    }

    // addition
    if (bin2_new){
        // create dynamic array to store result (since need to change size later)
        res = new char[len1];
        // initialize carry value and loop variable i
        int carry = 0, i=0;
        for (i=len1-1; i>=0; i--){
            
            // get the integer of its character value
            int a = (bin1[i] - '0');
            int b = (bin2_new[i] - '0');

            // if sum of column > 1
            if (a + b > 1){
                // temporary integer variable to be converted to char later
                int temp = 0 + carry;
                // convert temp to its char counterpart
                res[i] = temp + '0';
                // since sum of column is greater than 1 -> gotta carry 1 to the next column to be added
                carry = 1;

            }else{ // if sum of column <= 1

                // temporary integer variable to be converted to char later
                int temp = a + b + carry;
            
                if (temp > 1){ // if sum of column and the carry from the previous col > 0
                    res[i] = '0'; // set res of the col to = '0'
                    carry = 1;    // set carry = 1

                    // if meet the 0th index, and there is still carry 
                    // -> allocate new dynamic array to store longer sequence
                    if (i == 0 && (bin2_new[i] == '1' || bin1[i] == '1') && carry){
                        char *temp = new char[len2+3];
                        temp[0] =  '0';
                        temp[1] = carry + '0';
                        strcat(temp, res);
                        delete res;
                        res = temp;
                    }
                }else{ // if sum of column and carry <= 1
                    res[i] = temp + '0';
                    carry = 0;
                }  
            }
        }

    // do the same thing if bin1_new is allocated
    }else if (bin1_new){
        res = new char[len2];
        int carry = 0, i=0;
        for (i=len2-1; i>=0; i--){

            int a = (bin1_new[i] - '0');
            int b = (bin2[i] - '0');

            if (a + b > 1){
                int temp = 0 + carry;
                res[i] = temp + '0';
                carry = 1;
            }else{ // a+b <=1
                int temp = a + b + carry;
                if (temp > 1){
                    res[i] = '0';
                    carry = 1;

                    // if number of digit exceeds len2 then copy res to new array
                    if (i == 0 && (bin1_new[i] == '1' || bin2[i] == '1') && carry){
                        char *temp = new char[len2+3];
                        temp[0] =  '0';
                        temp[1] = carry + '0';
                        strcat(temp, res);
                        delete res;
                        res = temp;
                    }
                }else{ // temp > 1
                    res[i] = temp + '0';
                    carry = 0;
                }   
            }
        }   
    }else{ // if len1 = len2
        res = new char[len1];
        // initialize carry value and loop variable i
        int carry = 0, i=0;
        for (i=len1-1; i>=0; i--){
            
            // get the integer of its character value
            int a = (bin1[i] - '0');
            int b = (bin2[i] - '0');

            // if sum of column > 1
            if (a + b > 1){
                // temporary integer variable to be converted to char later
                int temp = 0 + carry;
                // convert temp to its char counterpart
                res[i] = temp + '0';
                // since sum of column is greater than 1 -> gotta carry 1 to the next column to be added
                carry = 1;

                // if meet the 0th index, and there is still carry 
                // -> allocate new dynamic array to store longer sequence
                if (i == 0 && (bin2[i] == '1' || bin1[i] == '1') && carry){
                    char *temp = new char[len2+3];
                    temp[0] =  '0';
                    temp[1] = carry + '0';
                    strcat(temp, res);
                    delete res;
                    res = temp;
                }

            }else{ // if sum of column <= 1

                // temporary integer variable to be converted to char later
                int temp = a + b + carry;
            
                if (temp > 1){ // if sum of column and the carry from the previous col > 0
                    res[i] = '0'; // set res of the col to = '0'
                    carry = 1;    // set carry = 1

            
                    // if meet the 0th index, and there is still carry 
                    // -> allocate new dynamic array to store longer sequence
                    if (i == 0 && (bin2[i] == '1' || bin1[i] == '1') && carry){
                        char *temp = new char[len2+3];
                        temp[0] =  '0';
                        temp[1] = carry + '0';
                        strcat(temp, res);
                        delete res;
                        res = temp;

                        cout << strlen(temp)<<endl;
                    }


                }else{ // if sum of column and carry <= 1
                    res[i] = temp + '0';
                    carry = 0;
                }
                
            }
        }

    }
    
    return res;
  
}

int main(){

    char bin1[] = "1111";
    char bin2[] = "11";
    char correct[] = "010010";

    char* res = add(bin1, bin2);
    if (compareResult(res, correct)){
        cout<< "Result correct" <<endl;
        printDigit(res);
    }else{
        cout<<"Result Incorrect"<<endl;
        cout<<"Answer: ";  printDigit(res);
        cout<<"Key:    ";  printDigit(correct);
    }

    delete res;

    return 0;
}