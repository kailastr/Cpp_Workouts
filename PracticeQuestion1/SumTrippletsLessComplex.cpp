// time complexity will only be O(n) and it is only applied for sorted array
#include <iostream>

using namespace std;

int *seletionSort(int arr[], int n);

int main()
{
    int n, sum, flag = 0;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter values to the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *sortedArr = seletionSort(arr, n);

    cout << "Enter the sum : ";
    cin >> sum;

    // sum triplet
    for (int i = 0; i < n - 1; i++)
    {
        int low = i + 1, high = n - 1;

        while (low < high)
        {
            if (arr[i] + arr[low] + arr[high] == sum)
            {
                cout << "The tripplets are " << arr[i] << ", " << arr[low] << " and " << arr[high] << endl;
                flag = 1;
                low++;
                high--;
            }
            else if (arr[i] + arr[low] + arr[high] < sum)
            {
                low++;
            }
            else if (arr[i] + arr[low] + arr[high] > sum)
            {
                high++;
            }
        }
    }

    if (flag == 0)
    {
        cout << "There are no tripplet pairs found to get the sum " << sum << endl;
    }

    return 0;
}

// sorting
int *seletionSort(int arr[], int n)
{
    int min_index, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    int *sortedArr = new int[n];

    for (int i = 0; i < n; i++)
    {
        sortedArr[i] = arr[i];
    }

    return sortedArr;
}