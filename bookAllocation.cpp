#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int stdCount = 1;
    int page = 0;

    for (int i = 0; i < n; i++)
    {
        if (page + arr[i] <= mid)
        {
            page += arr[i];
        }
        else
        {
            stdCount++;
            if (stdCount > m || arr[i] > mid)
            {
                return false;
            }
            page = arr[i];
        }
    }
    return true;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }
    int s = 0;
    int e = sum;
    int ans = -1;
    int mid = +(e - s) / 2;
    int m = 2;
    int n = 4;

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << ans;
}