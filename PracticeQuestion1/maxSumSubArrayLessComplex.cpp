// find a sub array that gives the maximum sum (in less complex way)

#include <iostream>

int main()
{
    int n, MaxSum, CurrentSum = 0;

    std::cout << "Enter the size of the array : ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter values to the array : " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    // INT_MIN is a minimum -ve value that could be stored inside a int variable
    MaxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        CurrentSum = CurrentSum + arr[i];
        if (CurrentSum > MaxSum)
        {
            MaxSum = CurrentSum;
        }

        if (arr[i] < 0)
        {
            CurrentSum = 0;
        }
    }

    std::cout << "The maximum sum of the sub array is " << MaxSum;

    return 0;
}