#include <iostream>
using namespace std;

int main()
{
    
    int n, a = 0, b = 1, c;

    cout << "Enter the value of n: ";
    cin >> n;

    if(n == 1)
        cout << "Nth Fibonacci term = " << a;
    else if(n == 2)
        cout << "Nth Fibonacci term = " << b;
    else
    {
        for(int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        cout << "Nth Fibonacci term = " << b;
    }

    return 0;
}

    // Start with 0 and 1.
    
    // Keep generating Fibonacci numbers until the nth term is reached.
