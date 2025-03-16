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

void returnBook(){ // Function to return the book.
    string title; // Taking the title as a string.
    cout << "Enter the name of the book to return: " << endl; // Taking in the book name we want to issue.
    getline(cin,title); // Getting the title.

    for (auto &book : books){ // For book in all books.
        if (book.title == title && book.isIssued){ // Checking if the is present or if its not issued.
            book.isIssued = false; // If not returned the book.
            messageToDisplay("Book returned successfully!!!"); // Display if the book was returned successfully.
        }
    }
    messageToDisplay("Book cant be returned."); // Display if the book cant be returned.   
}