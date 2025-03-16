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

vector<Book> books; // Declaring vector to store the info about the book.

int main(){
    int choice; // Variable to store the user choice.
    
    do{ 
        cout << "Library Management System" << endl; // Displaying the title of the system.
        cout << "1. Add a book" << endl; // Displaying the options for the user.
        cout << "2. Display all books" << endl; 
        cout << "3. Issue a book" << endl;
        cout << "4. Return a book" << endl;
        cout << "5. Check book availability" << endl;
        cout << "6. Search a book" << endl;
        cout << "7. Remove a book" << endl;
        cout << "8. Count the number of books" << endl;
        cout << "9. List all issued books" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice; // Getting the user choice.
        cin.ignore(); // To ignore the newline character.

    switch (choice){ // Switch case to perform the user choice.
        case 1: // If the user chooses to add a book.
        addBook();
        break;
        case 2: // If the user chooses to display all books.
        displayBooks();
        break;
        case 3: // If the user chooses to issue a book.
        issueBook();
        break;
        case 4: // If the user chooses to return a book.
        returnBook();
        break;
        case 5: // If the user chooses to check book availability.
        {
            string title; // Variable to store the title of the book.
            cout << "Enter the title of the book: "; // Asking the user to enter the title of the book.
            getline(cin, title); // Getting the title of the book.
            if (availableBook(title)){ // If the book is available.
                cout << "The book is available." << endl; // Displaying the message.
            }else{ // If the book is not available.
                cout << "The book is not available." << endl; // Displaying the message.
            }
            break;
        }
        case 6: // If the user chooses to search a book.
        searchBook();
        break;
        case 7: // If the user chooses to remove a book.
        removeBook();
        break;
        case 8: // If the user chooses to count the number of books.
        {
            int count = countBooks(); // Getting the count of books.
            cout << "Number of books: " << count << endl; // Displaying the number of books.
        }
        break;
        case 9: // If the user chooses to list all issued books.
        listIssuedBooks();
        break;
        case 10: // If the user chooses to exit the system.
        cout << "Exiting the system." << endl;
        return 0;
        default: // If the user enters an invalid choice.
        messageToDisplay("Invalid input");
    }
    userInput();
    }while(choice != 10);
        return 0;
};