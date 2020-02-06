/*
 Feb 04, 2020
 Mizuki Hashimoto
 7th edition p276 Ex6.35
 This is the program generates random number between 1 and 1000, and let the user to guess the number generated.
 It counts how many times the user guessed and print a comment depends on that number through a separate function.
 */

#include <iostream>
#include <ctime>
using namespace std;

int message(int count) { // print a comment depends on how many times the user guessed
    if(count == 10) {
        cout << "Ahah! You know the secret!" << endl;
    } else if(count < 10) {
        cout << "Either you know the secret or you got lucky!" << endl;
    } else {
        cout << "You should be able to do better!" << endl;
    }
}

void guessing_game(int value, int count) { // guessing game
    int guess = 0; // user guess
    cout << "Guess a number between 1 and 1,000" << endl;
    cin >> guess;
    count++;

    if(guess == value) {
        cout << "Excellent! You guessed the number!" << endl;
        cout << "You guessed " << count << " times" << endl;
        message(count); // call the function message
    } else if(guess < value) {
        cout << "Too low. Try again." << endl;
        guessing_game(value, count); // recursive call
    } else {
        cout << "Too high. Try again." << endl;
        guessing_game(value, count); // recursive call
    }
}

int main() {
    char ans = 'N'; // user answer for repeating the game
    srand((unsigned int) time(0)); // set rand seed to be current time

    do {
        int value = rand() % 1000 + 1; // generate random value between 1 and 1000
        int count = 0; // guess time counter
        guessing_game(value, count); // call the function guessing_game
        cout << "Would you like to play again? Y/N: "; // ask the user whether he wants to play again
        cin >> ans;
    } while(ans == 'Y'); // loop while the user input is Y
}

/*
Guess a number between 1 and 1,000
500
Too high. Try again.
Guess a number between 1 and 1,000
250
Too low. Try again.
Guess a number between 1 and 1,000
375
Too high. Try again.
Guess a number between 1 and 1,000
310
Too low. Try again.
Guess a number between 1 and 1,000
345
Too low. Try again.
Guess a number between 1 and 1,000
360
Too low. Try again.
Guess a number between 1 and 1,000
370
Too high. Try again.
Guess a number between 1 and 1,000
365
Excellent! You guessed the number!
You guessed 8 times
Either you know the secret or you got lucky!
Would you like to play again? Y/N: Y
Guess a number between 1 and 1,000
500
Too high. Try again.
Guess a number between 1 and 1,000
250
Too low. Try again.
Guess a number between 1 and 1,000
375
Too low. Try again.
Guess a number between 1 and 1,000
400
Too low. Try again.
Guess a number between 1 and 1,000
450
Too low. Try again.
Guess a number between 1 and 1,000
475
Too low. Try again.
Guess a number between 1 and 1,000
490
Too high. Try again.
Guess a number between 1 and 1,000
485
Too high. Try again.
Guess a number between 1 and 1,000
480
Too high. Try again.
Guess a number between 1 and 1,000
477
Too low. Try again.
Guess a number between 1 and 1,000
478
Excellent! You guessed the number!
You guessed 11 times
You should be able to do better!
Would you like to play again? Y/N: N
 */
