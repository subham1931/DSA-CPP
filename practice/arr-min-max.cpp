#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    int arr[100];
    cout << "Enter " << size << " numbers for find min and max" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout<<min<<endl<<max;
}