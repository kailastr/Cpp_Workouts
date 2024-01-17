#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    int n, key, flag = 0, num1, num2, left, right;

    cout << "\n Only applicable for sorted arrays !!" << endl;
    cout << "\n Enter the size of the array : ";
    cin >> n;

    left = 0;
    right = n - 1;

    int arr[n];
    cout << "Enter values to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to find the sum of : ";
    cin >> key;

    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < n; i++)
    {
        if (arr[left] + arr[right] == key)
        {
            flag = 1;
            cout << "The numbers to be added to get " << key << " is : " << arr[left] << " & " << arr[right] << endl;
            break;
        }
        else if (arr[left] + arr[right] > key)
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    if (flag == 0)
    {
        cout << "There are no pairs to be found to get the sum as " << key << endl;
    }

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    cout << "The time taken to complete this process is " << duration.count() << "sec" << endl;

    return 0;
}