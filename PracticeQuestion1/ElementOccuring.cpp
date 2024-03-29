// find the elements in the array that occurs more than n/3 times
#include <iostream>
#include <chrono>

using namespace std;

int main()
{

    int n, key, count = 0, flag = 0;

    cout << "Enter the number of elements that should have to be stored in the array : ";
    cin >> n;

    int arr[n], limit = n / 3;

    cout << "Enter values to the array : " << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    auto start = chrono::high_resolution_clock::now(); // starting time

    for (int i = 0; i < n / 2; i++)
    {
        key = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == key)
            {
                count++;
            }

            if (count > limit)
            {
                cout << arr[i] << " Repeated more than n/3 times.." << endl;
                flag = 1;
                count = 0;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << "No numbers repeated more than n/3 times";
    }

    auto end = chrono::high_resolution_clock::now(); // ending time

    chrono::duration<double> duration = end - start; // process time duration

    cout << "\nTime Taken : " << duration.count();

    return 0;
}