// Write a program to Remove duplicate characters.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    int visited[256] = {0};

    cout << "String after removing duplicates: ";

    for(int i = 0; i < str.length(); i++) {
        if(visited[str[i]] == 0) {
            cout << str[i];
            visited[str[i]] = 1;
        }
    }

    return 0;
}