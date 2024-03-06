#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return (a == 0) ? b : a;
}

int main()
{

    int a;
    cout << "Enter the Value of a :-";
    cin >> a;
    int b;
    cout << "Enter the Value of b :-";
    cin >> b;

    cout << "GCD: " << gcd(a, b);

    return 0;
}
