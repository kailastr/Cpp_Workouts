// Find an element in the array which repeats more than half of the array
#include <iostream>

using namespace std;

int main()
{
    int n, MajElement, CurrentElement, CurrentElementCount = 1, flag = 0;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n], MajElementCount = n / 2;

    cout << "Enter the values to the array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        CurrentElement = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == CurrentElement)
            {
                CurrentElementCount++;
            }

            if (CurrentElementCount > MajElementCount)
            {
                flag = 1;
                MajElementCount = CurrentElementCount;
                MajElement = arr[i];
            }
        }
        CurrentElementCount = 0;
    }

    if (flag == 1)
    {
        cout << "The major element is " << MajElement << " with " << MajElementCount << " count";
    }
    else
    {
        cout << "There is no majority element buddy..";
    }

    return 0;
}