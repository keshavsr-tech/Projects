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

void listIssuedBooks(){ // Function to list the issued books.
    bool issuedFound = false; // Flag to check if any book is issued.
    cout << "List of issued books: " << endl; // Printing the title of the list.
    for (const auto &book : books){ // Looping through the vector of books.
        if (book.isIssued){ // Checking if the book is issued.
            cout << "Title of the book is " << book.title << " and the author is " << book.author << endl; // Printing the title and author of the book.
            issuedFound = true; // Setting the flag to true.
        }
    }
    if (!issuedFound){ // Checking if any book is issued.
        cout << "No books are issued." << endl; // Printing the message if no book is issued.
    }
}