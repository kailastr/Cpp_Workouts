// Find if there is a sub array that could be made from the given array where the sum of the sub array gives zero in less complex way
#include <iostream>
#include <unordered_map>

//-------------------without using namespace std
int main()
{
    int n, sum = 0, subArrPresent = 0;
    std::cout << "Enter the size of the array : ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter values to the array : " << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum == 0)
        {
            subArrPresent = 1;
        }
        else
        {
            if (mp[sum] > 0)
            {
                subArrPresent = 1;
            }
            else
            {
                mp[sum]++;
            }
        }
    }
    if (subArrPresent == 1)
    {
        std::cout << "Sub array is present";
    }
    else
    {
        std::cout << "Sub array is not present";
    }

    return 0;
}

//-----------------------by using namespace std
// using namespace std;

// int main()
// {
//     int n, sum = 0;
//     bool isSubArrPresent = false;

//     cout << "Enter the size of the array : ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter values to the array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     unordered_map<int, int> mp; //[8, 5, -5, 11, 7]

//     bool subArrPresent = false;

//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];

//         if (sum == 0)
//         {
//             subArrPresent = true;
//         }
//         else
//         {
//             if (mp[sum] > 0)
//             {
//                 subArrPresent = true;
//             }
//             else
//             {
//                 mp[sum]++;
//             }
//         }
//     }

//     if (subArrPresent)
//     {
//         cout << "Sub array present";
//     }
//     else
//     {
//         cout << "Sub array not present";
//     }

//     return 0;
// }