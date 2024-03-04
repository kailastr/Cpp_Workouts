// Find the first occurance of an element entered by the user from an array
// the time complexity of this method is O(N), in less complex method we could make it O(log n)
#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int n, element, elementIndex, flag = 0;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter values to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to find it's index : ";
    cin >> element;

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            flag = 1;
            elementIndex = i;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "The index of " << element << "after sorting is found in index " << elementIndex;
    }
    else
    {
        cout << element << " is not found in the array ";
    }

    return 0;
}