// find the last occurance index of the given element from a sorted array
// the time complexity of this method is O(N), in less complex method we could make it O(log n)
#include <iostream>

using namespace std;

int main()
{
    int n, element, lastOccurance = -1;

    cout << "Enter the size of the array :";
    cin >> n;

    int arr[n];

    cout << "Enter elements to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to find its last occarance index : ";
    cin >> element;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            lastOccurance = i;
        }
    }

    if (lastOccurance == -1)
    {
        cout << "The element " << element << " is not found in the array ";
    }
    else
    {
        cout << "The last occurance of " << element << " is at " << lastOccurance << " index";
    }

    return 0;
}