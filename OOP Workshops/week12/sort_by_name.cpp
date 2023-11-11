#include "sort_by_name.h"
#include <string.h>

void swap(animal** xp, animal** yp){
    animal * temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort_by_name::sort(animal **animals,int n){
    int i = 0, j=0;
    for (i = 0; i < n - 1; i++){
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++){

            if ((animals[j] -> get_name()) > (animals[j + 1] -> get_name()) ){
                //swap(&animals[j], &animals[j + 1]);
                animal* temp = animals[j];
                animals[j] = animals[j+1];
                animals[j+1] = temp;
            }
               
        }      
    }
}
