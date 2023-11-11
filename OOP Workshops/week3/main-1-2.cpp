#include <iostream>

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main(){

    std::string courses[4] = {"Math", "Geo", "Eng", "Phy"};
    std::string students[] = {"Sam", "Bob", "William", "Michael", "Edward"};
    int report_card [][4] = {{10,10,10,10},
                             {8,8,8,8},                 
                             {9,10,9,10},     
                             {10,7,10,10},       
                             {10,8,10,10}};
    int nstudents = 5;

    print_class(courses, students, report_card, nstudents);


    return 0;
}