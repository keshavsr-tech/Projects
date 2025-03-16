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

void addBook(){ // Function to add the book.
    string title,author; // Taking the title and author as strings.
    cout << "Enter book title: " << endl; // Asking for the book name.
    getline(cin,title); // Storing the title using getline.
    cout << "Enter author name: " << endl; // Asking for the author name.
    getline(cin,author); // storing the name of the author.

    books.push_back({title,author,false}); // Stores info on the book and dynamically resizes the vector. 
    messageToDisplay("Book was added successfully!!!"); // Message to display if the book was added.
}