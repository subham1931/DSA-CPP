#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 0, 0, 0, 0, 1, 0};
    int i = 0, j = 7; // j = n-1

    while (i < j)
    {
        while (arr[i] == 0 & i < j)
        {
            i++;
        }

        while (arr[j] == 1 & i < j)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i];
    }
}