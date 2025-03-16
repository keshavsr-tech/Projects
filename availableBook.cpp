#include "LibManageHeader.h" // Getting info from the header file.
#include <iostream> // To recognize std.
#include <vector> // For including vector.
#include <string> // For string values.
using namespace std; // For cin and cout.

struct Book{ // Creating a struct to store info about the book.
    string title; // Title of the book.
    string author; // Name of the author.
    bool isIssued; // To track the book wheather issued or not.
};

extern vector<Book> books; // Declaring vector to store the info about the book.

bool availableBook(const string &bookTitle){ // Function for available books.
    for (auto &book : books){ // For book in all books.
        if (book.title == bookTitle && !book.isIssued){ // Checking if the is present or if its issued.
            return true; // Return true.
        }
    }
    return false; // Return false
}