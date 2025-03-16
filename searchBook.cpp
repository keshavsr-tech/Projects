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

void searchBook() {
    string title; // Taking in the title as the string.
    cout << "Enter book title to search: " << endl; // Message to ask for the name of the book.
    getline(cin, title); // Taking in the name of the book.

    for (auto const &book : books){
        if (book.title == title){
            cout << "Title of the book: " << book.title << endl; // Display title of the book.
        cout << "Name of the author: " << book.author << endl; // Name of the author.
        cout << "Is the book issued: " << (book.isIssued ? "Yes" : "No") << endl; // Check if book is issued.
        }
    }
    messageToDisplay("Book not found."); // Message if book is not found.
}