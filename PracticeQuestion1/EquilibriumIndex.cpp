// Find if the sum of LHS and RHS values inside an array gives the anser

#include <iostream>

int main()
{
    int n, flag = 0;
    std::cout << "Enter the size of the array : ";
    std::cin >> n;

    int arr[n], LHS_sum = 0, RHS_sum = 0;

    std::cout << "Enter the values to the array : ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        LHS_sum = 0;
        RHS_sum = 0;
        for (int j = 0; j < i; j++)
        {
            LHS_sum = LHS_sum + arr[j];
        }

        for (int k = i + 1; k < n; k++)
        {
            RHS_sum = RHS_sum + arr[k];
        }

        if (LHS_sum == RHS_sum)
        {
            flag = 1;
            std::cout << "The array get in equilibrium at " << i << "th index";
        }
    }
    if (flag == 0)
    {
        std::cout << "The array doesnt get in equilibrium";
    }

    return 0;
}