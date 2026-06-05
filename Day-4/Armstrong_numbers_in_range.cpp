#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for(int i = start; i <= end; i++)
    {
        int num = i;
        int sum = 0, digit;

        while(num != 0)
        {
            digit = num % 10;
            sum = sum + (digit * digit * digit);
            num = num / 10;
        }

        if(sum == i)
        {
            cout << i << " ";
        }
    }

    return 0;
} 

     // Check each number in the given range.
     
    // If the sum of cubes of its digits equals the number, print it.