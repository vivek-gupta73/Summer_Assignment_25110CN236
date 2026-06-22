// Write a program to Find row-wise sum. 


#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {
        int sum = 0;

        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }

        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}