// Find if there is a sub array that could be made from the given array where the sum of the sub array gives zero
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    bool isSubArrPresent = false;

    cout << "Enter the size of the array :" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the values to the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            if (sum == 0)
            {
                isSubArrPresent = true;
            }
        }
    }

    if (isSubArrPresent)
    {
        cout << "There is sub-Array present where their sum equals Zero" << endl;
    }
    else
    {
        cout << "There is no sub-Array present where their sum equals Zero" << endl;
    }

    return 0;
}