#include <iostream>
#include <string>
using namespace std;

#include "Book.h"
#include "Library.h"

int main(){

    Book *books = new Book[3];
    books[0] = Book("Book 1", "Author 1", 10);
    books[1] = Book("Book 2", "Author 2", 10);
    books[2] = Book("Book 3", "Author 3", 10);

    // cout <<b1.title << "|"<< b1.author<< "|" <<b1.numCopies<<endl;
    // cout <<b2.title << "|"<< b2.author<< "|" <<b2.numCopies<<endl;
    // cout <<b3.title << "|"<< b3.author<< "|" <<b3.numCopies<<endl;
    
    Library l1("The Library", books, 3);

    // borrow books
    l1.borrowBook(3, "Book 1");
    l1.borrowBook(2, "Book 3");
    l1.borrowBook(2, "Book 2");
    l1.listBooks();

    cout << "----------------------------------------"<<endl;

    // return books
    l1.returnBook(3, "Book 1");
    l1.returnBook(2, "Book 3");
    l1.returnBook(2, "Book 2");
    l1.listBooks();

    delete [] books;

    return 0;
}