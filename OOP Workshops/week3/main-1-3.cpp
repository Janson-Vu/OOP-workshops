#include <iostream>

// extern void print_class(std::string courses[4], std::string *students, int **report_card, int nstudents);
extern void inputInfo(std::string courses[4], std::string *students, int **report_card, int *nstudents);
// #include "function-1-3.cpp"

int main(){

    std::string courses[4];
    std::string * students;
    int ** report_card = nullptr;
    int *nstudents = nullptr;

    inputInfo(courses, students, report_card, nstudents);


    //print_class(courses, students, report_card, *nstudents);


    return 0;
}