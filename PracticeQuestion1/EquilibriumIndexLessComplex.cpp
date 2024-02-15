// Find if the sum of LHS and RHS values inside an array gives the anser in less complex way
#include <iostream>

using namespace std;

int main()
{
    int n, flag = 0, arrSum = 0, LHS_sum = 0;

    cout << "Enter the size of the array :";
    cin >> n;

    int arr[n];

    cout << "Enter values to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // to get the total sum of the array
    for (int i = 0; i < n; i++)
    {
        arrSum = arrSum + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arrSum = arrSum - arr[i];

        if (LHS_sum == arrSum)
        {
            flag = 1;
            cout << "The array equilibrium at index " << i << endl;
            break;
        }
        else
        {
            LHS_sum = LHS_sum + arr[i];
        }
    }

    if (flag == 0)
    {
        cout << "The array doesnt became equilibrium";
    }

    return 0;
}