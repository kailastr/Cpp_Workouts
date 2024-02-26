// Moore voting algorith to find the element which repeats more that half of the size of the array
#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n], MajorityIndex = 0, count = 1;

    cout << "Enter values to the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // step 1 : to get the reference of the majority element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[MajorityIndex])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            MajorityIndex = i;
            count = 1;
        }
    }

    // step 2: to comform the majority element is repeating more than the half size of the array
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[MajorityIndex])
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        cout << arr[MajorityIndex] << " is the majority element with count = " << count;
    }
    else
    {
        cout << "No element occur more than " << n / 2 << " times";
    }

    return 0;
}