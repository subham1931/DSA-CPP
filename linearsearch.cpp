#include <iostream>
using namespace std;

bool findEnemy(int arr[], int key)
{
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[100] = {2, 4, 6, 82, 312, -2};

    int key;
    cout << "Enter an number for searching in array : " << endl;
    cin >> key;
    bool found = findEnemy(arr, key);

    if (found)
    {
        cout << key << " is Presen in array";
    }
    else
    {
        cout << key << " not present in array";
    }
}