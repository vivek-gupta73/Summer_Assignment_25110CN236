#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factors are: ";

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}


    // Check all numbers from 1 to the given number.
    
    // Print the numbers that divide the given number exactly.