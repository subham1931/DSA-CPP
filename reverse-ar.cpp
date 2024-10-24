#include <iostream>
using namespace std;

int reverseArray(int arr[], int size)
{
    int s = 0, e = size - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);
    cout << "Reversed Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}