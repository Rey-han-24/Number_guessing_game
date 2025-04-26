#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int secretNumber, userGuess;
    int attempts = 0;
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
        } else {
            cout << "Congratulations! You guessed the right number in " << attempts << " attempts." << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}

