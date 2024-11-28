#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];
    cout << "Enter elementt for 3rows and 4 cols : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int col = 0; col < 4; col++)
    {
        if (col & 1)
        {
            for (int row = 2; row >= 0; row--)
            {
                cout << arr[row][col]<<" ";
            }
            // cout<<endl;
        }else{
            for (int row = 0; row < 3; row++)
            {
                cout << arr[row][col]<<" ";
            }
        }
    }
}