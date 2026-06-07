#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);

    return 0;
}



      // Function calls itself until it reaches 0 or 1.
      
    // Then it multiplies the numbers while returning back.