#include <string>
using namespace std;

#include "Book.h"

// constructor
Book::Book(string theTitle, string theAuthor, int theNumCopies): 
title(theTitle), author(theAuthor), orgNumCopies(theNumCopies){currentNumCopies = orgNumCopies;}

// default constructor
Book::Book():Book("No title", "No author", 0){}

// destructor
Book::~Book(){}