// #include <iostream>
// using namespace std;

// void findOccurance(int arr[], int size)
// {
//     bool visited = false;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == visited)
//             continue;
//         int count = 1;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//                 arr[j] = visited;
//             }
//         }

//         cout << arr[i] << " " << count << endl;
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 1, 2, 3, 2, 3, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     findOccurance(arr, size);
// }

#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique ^= arr[i];
    }
    return unique;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueElement = findUnique(arr, size);
    if (uniqueElement)
    {
        cout << "The unique element is: " << uniqueElement << endl;
    }
    else
    {
        cout << "Thre is no unique element";
    }

    return 0;
}
