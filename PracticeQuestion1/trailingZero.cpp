#include <iostream>

using namespace std;

int main()
{
    int n, fact = 1, count = 0;

    cout << "Enter the number for factorial : ";
    cin >> n;

    if (n == 0)
    {
        cout << "Zero is not repeated at the end";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    while (fact % 10 == 0)
    {
        count++;
        fact /= 10;
    }

    if (count != 0)
    {
        cout << "Trailing zero = " << count;
    }
    else
    {
        cout << "Zero is not repeated at the end";
    }

    return 0;
}