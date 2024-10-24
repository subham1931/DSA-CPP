#include <iostream>
using namespace std;

void printArray(int arr[], int s)
{
    cout << "Printing Integer Array" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
}

void printArrayCh(char arr[], int s)
{
    cout << "Printing character Array" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    char charr[5] = {'a',
                     'b',
                     'c',
                     'd',
                     'e'};
    int chSize = 5;

    // int arrSize = sizeof(arr) / sizeof(int);
    // cout<<"Size of array : " << arrSize;
    printArray(arr, n);
    printArrayCh(charr, chSize);
}