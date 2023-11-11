#include <iostream>
using namespace std;
#include "zoo.h"

int main(){

    // int cows = 30;
    // int lions = 50;

    int cows_end_index = 0;
    // for (int i=0; i<cows; i++){
    //     cows_end_index = i;
    // }

    // int lions_end_index = 0;
    // for (int i = cows_end_index+1; i<cows_end_index + lions+1; i++){
    //     lions_end_index = i;
    // }

    // cout <<cows_end_index<< endl<< lions_end_index <<endl;

    zoo z1("Zootopia", 30, 50);
    cout << z1.get_name() <<endl;
    cout << z1.get_number_of_animals() <<endl;
    animal** my_animal = z1.get_animals();


    int num_lions = 0;
    int num_cows = 0;
    for (int i=0; i<30+50; i++){
        if (my_animal[i] -> get_name() == "Hunter: Clarence"){
            num_lions++;
        }else if (my_animal[i] -> get_name() == "Safe: Daisy"){
            num_cows++;
        }
    }
    
    cout <<"Cows:" << num_cows << endl <<"Lions:"<< num_lions <<endl;

    return 0;
}
