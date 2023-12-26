#include <iostream>

using namespace std;

int main()
{
    int s, min_index, temp;

    cout << "Enter the size of the arr : ";
    cin >> s;

    int Arr[s];

    cout << "Enter values to the array : " << endl;
    for (int l = 0; l < s; l++)
    {
        cin >> Arr[l];
    }

    // seletion sort part
    for (int i = 0; i < s - 1; i++)
    {
        min_index = i;

        for (int j = i + 1; j < s; j++)
        {
            if (Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }

        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
    }

    cout << "The array after sorting is " << endl;
    for (int k = 0; k < s; k++)
    {
        cout << Arr[k] << endl;
    }

    return 0;
}