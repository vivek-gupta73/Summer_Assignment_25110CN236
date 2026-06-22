// Write a program to Check symmetric matrix.


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter order of square matrix: ";
    cin >> n;

    int matrix[n][n];
    bool symmetric = true;

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "Matrix is symmetric";
    else
        cout << "Matrix is not symmetric";

    return 0;
}