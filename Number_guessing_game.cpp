#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath> 
using namespace std;
int main() {
    char playAgain;
    do {
        int secretNumber, userGuess;
        int attempts = 0;
        const int MAX_TRIES = 7;
        srand(time(0)); 
        secretNumber = rand() % 100 + 1;
        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "I'm thinking of a number between 1 and 100. Try to guess it!" << endl;
        do {
            cout << "Enter your guess: ";
            cin >> userGuess;
            attempts++;
            if (userGuess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else if (userGuess > secretNumber) {
                cout << "Too high! Try again." << endl;
            }
            if (abs(userGuess - secretNumber) <= 5 && userGuess != secretNumber) {
                cout << "You're very close!" << endl;
            }
            if (attempts >= MAX_TRIES && userGuess != secretNumber) {
                cout << "Game Over! You've used all your tries. The number was: " << secretNumber << endl;
                break;
            }
        } while (userGuess != secretNumber);
        if (userGuess == secretNumber) {
            cout << "Congratulations! You guessed the right number in " << attempts << " attempts." << endl;
        }
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;
    } while (playAgain == 'y' || playAgain == 'Y');
    cout << "Thanks for playing! Goodbye!" << endl;
    return 0;
}

