#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book{
    public:
        std::string title;
        std::string author;
        int orgNumCopies;
        int currentNumCopies;

        // constructor
        Book(std::string theTitle, std::string theAuthor, int theNumCopies);
        // deafult constructor 
        Book();
        // destructor
        ~Book();

};

#endif //BOOK_H