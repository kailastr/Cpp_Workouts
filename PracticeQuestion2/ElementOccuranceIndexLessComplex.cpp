// Find the first occurance of an element entered by the user from an array with time complexity O(log n)
// only applicable for sorted array
#include <iostream>

using namespace std;

int main()
{
    int n, element;

    cout << "Enter the size of the array :";
    cin >> n;

    int arr[n];

    cout << "Enter values to the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search :";
    cin >> element;

    int low = 0, high = n - 1, leastIndex = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == element)
        {
            leastIndex = mid;
            high = mid - 1;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (leastIndex == -1)
    {
        cout << element << " not found in the array ";
    }
    else
    {
        cout << "The least index of " << element << " is " << leastIndex;
    }

    return 0;
}