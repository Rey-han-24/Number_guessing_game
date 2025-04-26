Number Guessing Game
Welcome to the Number Guessing Game! 🎮
This is a simple, interactive game where the player tries to guess a secret number that the computer has randomly selected. The secret number is between 1 and 100. You have a maximum of 7 attempts to guess it correctly. If you're close, the game will let you know! If you don't guess the number in time, the game will end and reveal the secret number.

Features:
Random Number Generation: The computer generates a random number between 1 and 100.
Feedback on Guesses: After each guess, you’ll receive feedback on whether your guess is too low, too high, or very close.
Limited Attempts: You have a total of 7 attempts to guess the number correctly.
Replay Option: After finishing a game, you can choose to play again.

How to Play:
When the game starts, you’ll be asked to guess a number between 1 and 100.
After each guess, the game will tell you if your guess is too high or too low.
If you're within 5 numbers of the secret number, the game will let you know you're very close!
You can make up to 7 guesses.
If you guess the number correctly, you’ll be congratulated and told how many attempts it took.
If you use all your attempts without guessing correctly, the game will reveal the secret number and end.
You will be asked if you'd like to play again.

Installation:
To run this game on your local machine, follow these steps:
Clone the repository:
git clone https://github.com/your-username/number-guessing-game.git


Navigate to the project folder:
cd number-guessing-game

Compile the code:
g++ number_guessing_game.cpp -o number_guessing_game


Run the game:
./number_guessing_game


Game Logic:
The game generates a secret number using the rand() function seeded with the current time, making the number different each time you play.
If your guess is too low or too high, the game will prompt you to try again.
If you guess correctly or exceed the allowed attempts, the game ends.
The number of attempts and proximity feedback adds an exciting challenge to the game!

Example Output:
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100. Try to guess it!
Enter your guess: 50
Too low! Try again.
Enter your guess: 75
Too high! Try again.
Enter your guess: 60
You're very close!
Enter your guess: 62
Congratulations! You guessed the right number in 4 attempts.
Do you want to play again? (y/n): n
Thanks for playing! Goodbye!

Author: Rey-han-24 


