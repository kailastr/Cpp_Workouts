// find a sub array that gives the maximum sum (in complex way)

#include <iostream>

int main()
{
    int n, sum = 0, MaxSum = 0;

    std::cout << "Enter the size of the array : ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter values to the array : " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    // lets consider the first element as the MaxSum
    MaxSum = arr[0];
    // 3, -5, -8, 9, 3
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = arr[j] + sum;

            if (sum > MaxSum)
            {
                MaxSum = sum;
            }
            else
            {
                sum = 0;
            }
        }
    }

    std::cout << "The maximum sum of the sub array is : " << MaxSum;

    return 0;
}