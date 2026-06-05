#include <iostream>
using namespace std;

int main()
{
    int num, largest = 0;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 2; i <= num; i++)
    {
        while(num % i == 0)
        {
            largest = i;
            num = num / i;
        }
    }

    cout << "Largest Prime Factor = " << largest;

    return 0;
}


    // Find all prime factors of the number.
    
    // Keep updating the largest prime factor found.