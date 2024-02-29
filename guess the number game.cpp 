#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GuessTheNumber {
private:
    int computerGeneratedNumber;
    int userGuessedNumber;
    int attempts;

public:
    void generateRandomNumber();
    void startGame();
};

void GuessTheNumber::generateRandomNumber() {
    srand(time(0)); // Seed for random number generator
    computerGeneratedNumber = rand() % 100 + 1; // Generate random number between 1 and 100
}

void GuessTheNumber::startGame() {
    attempts = 0;
    cout << "Welcome to Guess The Number game!" << endl;
    generateRandomNumber();

    do {
        cout << "Guess the number: ";
        cin >> userGuessedNumber;
        attempts++;

        if (userGuessedNumber < computerGeneratedNumber) {
            cout << "Attempt: " << attempts << endl;
            cout << "Message: Guessed number is smaller than computer generated number" << endl;
        } else if (userGuessedNumber > computerGeneratedNumber) {
            cout << "Attempt: " << attempts << endl;
            cout << "Message: Guessed number is greater than computer generated number" << endl;
        } else {
            cout << "Attempt: " << attempts << endl;
            cout << "Message: Congratulation you won the game in " << attempts << " attempts" << endl;
            break;
        }
    } while (true);
}

int main() {
    GuessTheNumber game;
    game.startGame();
    return 0;
}