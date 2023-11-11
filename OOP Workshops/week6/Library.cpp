#include <string>
#include <iostream>
#include "Library.h"

Library::Library(std::string theName, Book *theBooks, int theNumBooks){
    name = theName;
    books = theBooks;
    numBooks = theNumBooks;
}

Library::Library():Library("No name", nullptr, 0){}

Library::~Library(){}

bool Library::borrowBook(int num, std::string theTitle){
    for (int i=0; i<Library::numBooks; i++){
        if (books[i].title == theTitle && books[i].currentNumCopies>0){
            books[i].currentNumCopies -= num;
            return true;
        }
    }
    return false;
}

bool Library::returnBook(int num, std::string theTitle){
    for (int i=0; i<Library::numBooks; i++){
        if (books[i].title == theTitle && books[i].currentNumCopies<books[i].orgNumCopies){
            books[i].currentNumCopies += num;
            return true;
        }
    }
    return false;
}

void Library::listBooks(){
    for (int i=0; i<numBooks; i++){
        std::cout <<books[i].title << "|"<< books[i].author<< "|" <<books[i].currentNumCopies<<std::endl;
    }
}