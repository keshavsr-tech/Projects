#ifndef LIBRARY_H // If not defined library_h.
#define LIBRARY_H // Define library_h.

#include <string> // For string values.

// Function declarations:
void addBook(); // Adding a new book to the system(name, genre, author).
void displayBooks(); // Display the added books that are in the library.
void issueBook(); // Issues the book to the user.
void returnBook(); // Allows the book to be returned to the library. 
bool availableBook(const std::string &bookTitle); // Checks if the book is available in the library.
void searchBook(); // Searches for the books in the library.
void removeBook(); // Removes the books from the library's collection.
int countBooks(); // Counts the books in the library.
void listIssuedBooks(); // Lists the issued books in the library.
void messageToDisplay(const std::string &message); // The display message when the user wants to use the system.
void userInput(); // Input by the user.

#endif // End the condition.
