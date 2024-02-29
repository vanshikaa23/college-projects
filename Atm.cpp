#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Function prototypes
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

int main() {
    start();
    return 0;
}

void printIntroMenu() {
    cout << "Please select an option from the menu below:" << endl;
    cout << "l -> Login" << endl;
    cout << "c -> Create New Account" << endl;
    cout << "q -> Quit" << endl;
    cout << "> ";
}

void printMainMenu() {
    cout << "d -> Deposit Money" << endl;
    cout << "w -> Withdraw Money" << endl;
    cout << "r -> Request Balance" << endl;
    cout << "q -> Quit" << endl;
    cout << "> ";
}

void start() {
    cout << "Hi! Welcome to Mr. Zamar’s ATM Machine!" << endl;
    printIntroMenu();

    char option;
    cin >> option;

    switch (option) {
        case 'l':
            login();
            break;
        case 'c':
            createAccount();
            break;
        case 'q':
            cout << "Thanks for stopping by!" << endl;
            exit(0);
        default:
            cout << "Invalid option. Please try again." << endl;
            start(); // Restart the menu
    }
}

void login() {
    string userId, password;
    cout << "Please enter your user id: ";
    cin >> userId;
    cout << "Please enter your password: ";
    cin >> password;

    // Simulate login verification (compare with hardcoded values for now)
    if (userId == "12" && password == "2345") {
        cout << "Access Granted!" << endl;
        // Call function for main menu
        printMainMenu();
        // Continue with main menu options
        // Implement the rest of the functionality here
    } else {
        cout << "******** LOGIN FAILED! ********" << endl;
        start(); // Return to intro menu
    }
}

void createAccount() {
    string userId, password;
    cout << "Please enter your user id: ";
    cin >> userId;
    cout << "Please enter your password: ";
    cin >> password;

    // Simulate account creation
    cout << "Thank You! Your account has been created!" << endl;
    start(); // Return to intro menu
}