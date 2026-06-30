// Write a program to Find maximum occurring character


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

    int max = 0;
    char ch;

    for(int i = 0; i < str.length(); i++) {
        if(count[str[i]] > max) {
            max = count[str[i]];
            ch = str[i];
        }
    }

    cout << "Maximum occurring character: " << ch;

    return 0;
}