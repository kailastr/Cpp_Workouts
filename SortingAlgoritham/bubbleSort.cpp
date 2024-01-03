#include <iostream>

using namespace std;

int main()
{
    int n, temp;

    cout << "Enter the array size : ";
    cin >> n;

    int arr[n];

    cout << "Enter values to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // bubble sorting
    for (int j = 0; j < n - 1; j++) //4
    {
        for (int k = 0; k < n - j - 1; k++)  //4
        {
            if (arr[k] > arr[k + 1])
            {
                // swap arr[k] and arr[k+1]
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    cout << "The array after sorting is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}