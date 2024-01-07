#include <iostream>

using namespace std;

int main()
{
    int n, count = 0, quotient = 0;
    cout << "Enter the num to find the trailing zero of its factorial : ";
    cin >> n;

    while (n != 0)
    {
        quotient = n / 5;
        count = count + quotient;
        n = n / 5;
    }

    cout << "Trailing zeros = " << count;

    return 0;
}