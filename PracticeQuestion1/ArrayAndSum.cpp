// There will be an array and a integer key. We want to find two numbers from the array where thier sum will be equal to the integer key user entered
#include <iostream>
#include <chrono> //to calculate the processing time
using namespace std;

int main()
{
    int n, key, flag = 0, num1, num2;

    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter values to the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to find the sum of : ";
    cin >> key;

    auto start = chrono::high_resolution_clock::now(); // to get the starting time

    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] + arr[k] == key)
            {
                flag = 1;
                num1 = arr[j];
                num2 = arr[k];
                cout << "The numbers to be added to get " << key << " is : " << num1 << " & " << num2 << endl;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << "There are no pairs to be found to get the sum as " << key << endl;
    }

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> duration = end - start;

    cout << "Processing time = " << duration.count() << "sec" << endl;
    return 0;
}