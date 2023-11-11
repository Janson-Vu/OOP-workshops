#include <iostream>

// void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){

//     std::cout<< "Report Card" <<" ";
//     std::cout<< courses[0]<<" ";
//     std::cout<< courses[1]<<" ";
//     std::cout<< courses[2]<<" ";
//     std::cout<< courses[3]<< std::endl;

//     for (int r=0; r<nstudents; r++){
//         std::cout << students[r]<< " ";
//         for (int c=0; c<4; c++){
//             if (c<3){
//                 std::cout<< report_card[r][c]<< " ";
//             }else{
//                 std::cout<< report_card[r][c] << std::endl;
//             }
//         }
//     }
// }

void inputInfo(std::string courses[4], std::string *students, int ** &report_card, int *nstudents){

    // get input for nstudents
    std::cin >> *nstudents;
    *nstudents = *nstudents -'0';


    // get input for courses
    for (int i=0; i<4; i++){
        std::cin >> courses[i]; // expect a string
    }

    // get input for students
    // students = new std::string[*nstudents];
    // for (int i=0; i<*nstudents; i++){
    //     std::cin >> students[i];
    // }

    // initialize report card as 2D dynamic array
    report_card = new int*[*nstudents];
    for (int i=0; i<*nstudents; i++){
        report_card[i] = new int[4];
    }
    
    // get input for report card
    for (int i=0; i<*nstudents; i++){
        for (int j=0; j<4; j++){
            std::cin>> report_card[i][j];
        }
    }

}