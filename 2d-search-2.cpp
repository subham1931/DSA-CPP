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

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex <= colIndex)
    {
        int elm = arr[rowIndex] [colIndex];
        if (elm == target)
        {
            cout<<"Found ";
            return 0;
        }else if(elm < target){
            rowIndex++;
        }else{
            colIndex--;
        }
        
    }
    cout<<"Not Found!!";
    return 0;
}