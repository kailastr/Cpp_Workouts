// here the time complexity will be O(n), but since we use two arrays the space complexity will be more
#include <iostream>

using namespace std;

int main()
{
    int n, j = 0;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n], temp[n];

    cout << "Enter the values to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        temp[i] = 0;
    }

    cout << "The array after arranging zeros to the end \n [";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << "]";

    return 0;
}