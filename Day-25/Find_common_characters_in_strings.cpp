// Write a program to Find common characters in strings.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    int count[256] = {0};

    for(int i = 0; i < str1.length(); i++) {
        count[str1[i]] = 1;
    }

    cout << "Common characters: ";

    for(int i = 0; i < str2.length(); i++) {
        if(count[str2[i]] == 1) {
            cout << str2[i] << " ";
            count[str2[i]] = 0;
        }
    }

    return 0;
}