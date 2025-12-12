#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter the number :";
    cin >> n;
    if (n < 0)
    {
        cout << "invalid input";
    }
    else if (n == 0 || n == 1)
    {
        cout << "This is not a prime number.";
    }
    else if (n >= 2)
    {
        int isprime = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 1;
                break;
            }
        }
        if (isprime)
        {
            cout << "This is a not prime number.";
        }
        else
        {
            cout << "This is a prime number";
        }
    }
    return 0;
}