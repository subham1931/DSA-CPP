#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

int pivortSearch(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int findElm(int arr[], int size, int key)
{
    // int s = 0, e = size - 1;
    int pivort = pivortSearch(arr, size);
    // int mid = s + (e - s) / 2;
    if (key >= arr[pivort] && key <= size - 1)
    {
        return binarySearch(arr, pivort, size - 1, key);
    }
    else
    {
        return binarySearch(arr, 0, pivort, key);
    }

    // return pivort;
}

int main()
{
    int arr[] = {3, 4, 5, 1, 2};
    int key = 2;
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = findElm(arr, size, key);
    cout << ans;
}