// This is a program to find the elements repeating in an array more than n/3 times in less complex way

#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    int n, key, count1 = 0, count2 = 0, flag = 0, first, second;

    cout << "Enter the number of elements that should have to be stored in the array : ";
    cin >> n;

    int arr[n], limit = n / 3;

    cout << "Enter values to the array : " << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    auto start = chrono::high_resolution_clock::now(); // starting time

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == first)
        {
            count1++;
        }
        else if (arr[i] == second)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            count1++;
            first = arr[i];
        }
        else if (count2 == 0)
        {
            count2++;
            second = arr[i];
        }
        else
        {
            count1--;
            count2--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == first)
        {
            count1++;
        }
        else if (arr[i] == second)
        {
            count2++;
        }
    }

    if (count1 > limit && count2 > limit)
    {
        cout << first << " and " << second << " repeated more than n/3 times";
    }
    else if (count1 > limit)
    {
        cout << first << " repeated more than n/3 times";
    }
    else if (count2 > limit)
    {
        cout << second << " repeated more than n/3 times";
    }
    else
    {
        cout << "-1 : No number repeated more than n/3 times";
    }

    auto end = chrono::high_resolution_clock::now(); // ending time

    chrono::duration<double> duration = end - start; // time taken
    cout << "\nTime taken " << duration.count();

    return 0;
}