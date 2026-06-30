// Write a program to Find first non-repeating character.


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
    }

    for(int i = 0; i < str.length(); i++) {
        if(count[str[i]] == 1) {
            cout << "First non-repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character found";

    return 0;
}