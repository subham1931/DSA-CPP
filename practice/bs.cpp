#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int size)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (key == arr[mid])
        {
            return arr[mid];
        }

        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int key = 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = binarySearch(arr, key, size);
    if (ans == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Key found at " << ans << " index";
    }
    return 0;
}