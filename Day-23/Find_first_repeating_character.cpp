// Write a program to Find first repeating character.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    int count[256] = {0};

    for(int i = 0; i < str.length(); i++) {
        count[str[i]]++;

        if(count[str[i]] == 2) {
            cout << "First repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No repeating character found";

    return 0;
}