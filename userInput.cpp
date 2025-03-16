#include "LibManageHeader.h" // Getting info from the header file.
#include <iostream> // To recognize std.
#include <cstdlib>  // To exit the code.
#include <string> // For string values.
using namespace std; // For cin and cout.

void userInput(){ // Function for user input.
    string userChoice; // Users choice.

    // Displaying the message to continue the code or to exit in green text.
    cout << "\n\033[0;32mPress 'enter' to continue or press 'exit' to exit the code: \033[0;32m " << endl;
    cin.ignore(); // Ignore the excess error scribble.
    getline(cin, userChoice); // This will allow us to read the whole line of input.

    if (userChoice == "exit"){ // If condition on user input.
        cout << "\n\033[0;32mExiting the program!!! \033[0;32m " << endl; // If user wants to exit display messsage.
        exit(0); // To exit.
    }else{
        cout << "\n\033[0;32mContinuing the code... \033[0;32m " << endl; // If user wishes to continue.
    }
}