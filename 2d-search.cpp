#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};
    int row = arr.size();
    int col = arr[0].size();

    int target;
    cout << "Enter value to be search: ";
    cin >> target;

    int s = 0;
    int e = row * col - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int elm = arr[mid / col][mid % col];
        if (elm == target)
        {
            cout << "Found it!!!!";
            return 0;
        }
        else if (elm > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    cout<<"Not found !!";
    return 0;
}