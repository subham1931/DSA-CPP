#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

using namespace std;

void reverseArr(vector<int> &arr, int d, int count)
{
    d = d % count; // Handle cases where d > count
    reverse(arr.begin(), arr.begin() + d); // Reverse the first 'd' elements
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int count = arr.size();
    int d = 2;
    
    reverseArr(arr, d, count); // Function call

    // Printing the array
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
