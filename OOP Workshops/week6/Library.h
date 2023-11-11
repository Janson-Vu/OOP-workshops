#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include "Book.h"
#include <iostream>

class Library{
    public:
        std::string name;
        int numBooks;
        Book *books;

        // constructor
        Library(std::string theName, Book *theBooks, int theNumBooks);
        // default constructor
        Library();
        // destructor
        ~Library();

        // Borrow book function
        bool borrowBook(int num, std::string theTitle);

        // Return book function
        bool returnBook(int num, std::string title);

        // List out all the books
        void listBooks();

};

#endif //LIBRARY_H