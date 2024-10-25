#include <iostream>
using namespace std;

// int main(){
//     int arr[100] = {1,2,3,4,5,6};
//     for (int i = 0; i<6; i+=2){
//         swap(arr[i],arr[i+1]);
//     }

//     for (int i = 0; i<6; i++){
//         cout<<arr[i] <<' ';
//     }
// }

// optimal
int main()
{
    // int arr[100] = {1, 2, 3, 4, 5, 6};
    int arr[100] = {1, 2, 3, 4, 5};

    int size = 5;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            int temp = arr [i];
            arr[i] = arr[i + 1];
            arr[i+ 1] = temp;
            // swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}