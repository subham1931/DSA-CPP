#include <iostream>
// #include <vector>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        ans ^= i;
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = findUnique(arr,size);
    if (res)
    {
        cout << res;
    }else{
        cout<<"No unique elements";
    }
    
}