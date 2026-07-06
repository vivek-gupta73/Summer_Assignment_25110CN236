// Write a program to Create quiz application.


#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "Quiz Application\n\n";

    cout << "1. What is the capital of India?\n";
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\n";
    cin >> answer;

    if(answer == 'b')
        score++;

    cout << "\n2. How many days are there in a week?\n";
    cout << "a) 5\nb) 6\nc) 7\n";
    cin >> answer;

    if(answer == 'c')
        score++;

    cout << "\n3. What is 5 + 3?\n";
    cout << "a) 8\nb) 7\nc) 9\n";
    cin >> answer;

    if(answer == 'a')
        score++;

    cout << "\nYour score: " << score << "/3";

    return 0;
}