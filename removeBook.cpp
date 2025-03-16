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

void removeBook(){ // Function to return the book.
    string title; // Taking the title as a string.
    cout << "Enter the name of the book that you want to remove: " << endl; // Taking in the name of the book we want to remove.
    getline(cin, title); // Using getline to store the title.

    for (auto it = books.begin() ; it != books.end() ; ++it){ // To check if we are between our collection of books.
            if (it-> title == title){ // It points to object.
                books.erase(it); // Statement to remove book.
                messageToDisplay("Book removed successfully!!!"); // Message displayed when book is removed. 
                return;
            }
    }
    messageToDisplay("Book not found!!!"); // Message displayed if book not found.
}

