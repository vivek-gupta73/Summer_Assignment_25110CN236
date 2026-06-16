// Write a program to Find missing number in array.


#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    cout << "Missing number is: " << missing;

    return 0;
}