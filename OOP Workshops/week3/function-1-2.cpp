#include <iostream>

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){

    std::cout<< "Report Card" <<" ";
    std::cout<< courses[0]<<" ";
    std::cout<< courses[1]<<" ";
    std::cout<< courses[2]<<" ";
    std::cout<< courses[3]<< std::endl;

    for (int r=0; r<nstudents; r++){
        std::cout << students[r]<< " ";
        for (int c=0; c<4; c++){
            if (c<3){
                std::cout<< report_card[r][c]<< " ";
            }else{
                std::cout<< report_card[r][c] << std::endl;
            }
        }
    }

}