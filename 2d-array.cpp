#include <iostream>
using namespace std;

bool isParesent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];

    // manual input
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    // //input rowwise
    cout << "Enter Element row wise : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // input column wise
    //  for (int col = 0; col < 4; col++)
    //  {
    //      for (int row = 0; row < 3; row++)
    //      {
    //          cin >> arr[row] [col];
    //      }
    //  }

    // cout << "Output" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    ////finding Elment
    // cout << "Enter a number for find i the array : " << endl;
    // int target;
    // cin >> target;

    // if (isParesent(arr, target, 3, 4))
    // {
    //     cout << "Element Found";
    // }
    // else
    // {
    //     cout << "Elemnet Not Found";
    // }

    // sum of Row elements
int rowmaxi = 0;
int colmaxi = 0;
 for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        if (sum > rowmaxi)
        {
            rowmaxi = sum;
        }
        
        cout<<" = "<<sum << endl;
    }
    for (int j = 0; j < 4; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        if (sum > colmaxi)
        {
            colmaxi = sum;
        }
        cout << sum <<" ";
    }

cout<<endl<<"Maximum sum of row : "<<rowmaxi<<endl;
cout<<"Maximum sum of col : "<<colmaxi<<endl;
}