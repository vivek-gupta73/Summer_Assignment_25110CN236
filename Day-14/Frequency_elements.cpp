//Write a program to Frequency of an element.


#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, x;
    int count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to find frequency: ";
    cin >> x;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            count++;
        }
    }

    cout << "Frequency of " << x << " = " << count;

    return 0;
}