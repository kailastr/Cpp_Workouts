#include <iostream>

using namespace std;

int main()
{
    int n, element, lastOccurance = -1;

    cout << "Enter the size of the array :";
    cin >> n;

    int arr[n], high = n - 1, low = 0, middle;

    cout << "Enter elements to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search : ";
    cin >> element;

    while (high >= low)
    {
        middle = (high + low) / 2;

        if (arr[middle] == element)
        {
            lastOccurance = middle;
            low = middle + 1;
        }
        else if (arr[middle] > element)
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }

    if (lastOccurance == -1)
    {
        cout << "The element " << element << " is not found in the array ";
    }
    else
    {
        cout << "The last index of the element " << element << " is " << lastOccurance;
    }

    return 0;
}