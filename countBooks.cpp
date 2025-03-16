#include "LibManageHeader.h" // Getting info from the header file.
#include <iostream> // To recognize std.
#include <vector> // For including vector.
using namespace std; // For cin and cout.

struct Book{ // Creating a struct to store info about the book.
    string title; // Title of the book.
    string author; // Name of the author.
    bool isIssued; // To track the book wheather issued or not.
};

extern vector<Book> books; // Declaring vector to store the info about the book.

int countBooks(){ // Function to count the number of books.
    return books.size(); //Returning the number of books.
}

