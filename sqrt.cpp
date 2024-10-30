// ##Find squre root using binary search
#include <iostream>
    using namespace std;

int binarySearch(int n)
{
    int s = 0, e = n;
    long long int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        long long int squre = mid * mid;

        if (squre == n)
        {
            return mid;
        }
        else if (squre < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int num = 36;
    int ans = binarySearch(num);
    cout << ans;
}