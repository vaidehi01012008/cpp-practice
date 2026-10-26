#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        cout << "Factorial = " << fact;
    }

    return 0;
}