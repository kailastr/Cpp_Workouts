// Find the largest difference of two elements in the array where the largest element comes after smallest element
#include <iostream>

using namespace std;

int main()
{
    int n, maxDiff = INT_MIN, currentDiff;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter values to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            currentDiff = arr[j] - arr[i];
            if (currentDiff > maxDiff)
            {
                maxDiff = currentDiff;
            }
        }
    }

    cout << "The difference of largest and smallest element is " << maxDiff;

    return 0;
}