#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    // vector<int> arr = {10,20,30};
    int count = arr.size();
    int idx = 0;

    for (int i = 0; i < count; i++)
    {
        if(arr[i] != 0){
            arr[idx++] = arr[i];
        }
    }

    cout<<idx;

    while (idx<count)
    {
        arr[idx++] = 0;
    }

    for (int i = 0; i < count; i++)
    {
        cout<<arr[i];
    }
    
    
    
}