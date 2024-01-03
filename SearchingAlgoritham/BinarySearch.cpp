#include <iostream>

using namespace std;

int mergeSort(int arry[], int key, int size)
{
    int left = 0, right = size - 1;
    int mid = left + (right - left) / 2;

    while (left <= right)
    {

        if (arry[mid] == key)
        {
            return mid;
        }

        if (arry[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }

        return -1;
    }
}

int main()
{
    int n, key, size, result = -1;

    cout << "Enter the number of elements in the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter values to the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to be searched : ";
    cin >> key;

    // in this problem the array of the array is n. If we dont know the size we could use the following method
    size = sizeof(arr) / sizeof(arr[0]); // sizeof function gets the size of datatypes. Therefore  (size of total array) / (size of single element) gives the size of the array

    result = mergeSort(arr, key, size);

    if (result != -1)
    {
        cout << "The element is found in " << result << " index";
    }
    else
    {
        cout << key << " not found";
    }

    return 0;
}