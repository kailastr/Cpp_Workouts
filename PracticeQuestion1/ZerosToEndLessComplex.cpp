// Moving all the Zeros in an array to the last in less complex way

#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter values to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }

    for (int i = count; i < n; i++)
    {
        arr[i] = 0;
    }

    cout << "The array after arranging zeros to the right : \n [";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "]";

    return 0;
}