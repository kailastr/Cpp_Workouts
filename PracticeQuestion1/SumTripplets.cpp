// time complexity will be O(n^3)
#include <iostream>
using namespace std;

int main()
{
    int n, sum, flag = 0;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter values to the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the sum you want to check : ";
    cin >> sum;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << "The tripplets are : " << arr[i] << ", " << arr[j] << " and "
                         << arr[k] << endl;

                    flag = 1;
                }
            }
        }
    }

    if (flag == 0)
    {
        cout << "There are no tripplets found" << endl;
    }

    return 0;
}