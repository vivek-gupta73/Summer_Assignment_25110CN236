#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }

        for(j = 0; j < i; j++)
        {
            cout << char('A' + j);
        }

        for(j = i - 2; j >= 0; j--)
        {
            cout << char('A' + j);
        }

        cout << endl;
    }

    return 0;
}