      //Write a program to Write function for perfect number. 


      #include <iostream>
using namespace std;

bool perfect(int n)
{
    int sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        return true;
    else
        return false;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(perfect(n))
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";

    return 0;
}


