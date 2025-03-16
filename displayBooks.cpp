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

void displayBooks(){ // Function to display the book and its info.
    cout << "Books in the library: " << endl; // Display the books in the library.
    for (const auto &book : books) { // Iterate through books.
        cout << "Title of the book: " << book.title << endl; // Display title of the book.
        cout << "Name of the author: " << book.author << endl; // Name of the author.
        cout << "Is the book issued: " << (book.isIssued ? "Yes" : "No") << endl; // Check if book is issued.
    }
}