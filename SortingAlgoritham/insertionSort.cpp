#include <iostream>

using namespace std;

int main()
{
    int n, key;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter elements to array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // insertion sort ----------------
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        key = arr[i];

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    //--------------------------------

    cout << "The sorted array is : " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << "|" << arr[i];
    }
    cout << "|";

    return 0;
}