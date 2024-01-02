#include <iostream>

using namespace std;

int main()
{
    int n, check, flag = 0;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter values to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to be searched";
    cin >> check;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == check)
        {
            cout << check << " is present in the index of " << j << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << check << " is not present in the array" << endl;
    }

    return 0;
}