// Write a program to Create number guessing game.


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int number = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess > number)
            cout << "Too high\n";
        else if(guess < number)
            cout << "Too low\n";
        else
            cout << "Congratulations! You guessed correctly.\n";

    } while(guess != number);

    return 0;
}