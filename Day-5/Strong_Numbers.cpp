#include <iostream>
using namespace std;

int main()
{
   
    int num, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0)
    {
        digit = num % 10;

        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == original)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";

    return 0;
}

    // Find the factorial of each digit and add them.
    
    // If the sum is equal to the original number, it is a Strong Number.
