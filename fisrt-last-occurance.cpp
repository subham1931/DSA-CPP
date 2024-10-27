// #include <iostream>
// using namespace std;
// void search(int arr[], int key, int size)
// {
//     int s = -1, e = -1;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key )
//         {
//             if(s == -1){
//                 s = i;
//             }
//             e = i;
//         }
//     }
//     cout << s << e;
// }
// int main()
// {
//     int arr[] = {
//         1,
//         0,
//         2,
//         5,
//         7,
//         5,
//         4,
//         2,
//     };
//     int key = 2;
//     int size = sizeof(arr) / sizeof(arr[0]);

//     search(arr, key, size);
// }


///using binary search
#include <iostream>
using namespace std;

int searchFirst(int arr[],int size, int key){
    int s =0,e =size-1;1
    int mid = s + (e - s) /2;
    int ans = -1 ;

    while (s <= e)
    {
        if(arr[mid] == key ){
            ans = mid;
            e = mid -1 ;
        }else if(key < arr[mid]){
            e = mid -1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }
        mid = s +(e -s) /2;
    }
    
    return ans;
}
int searchLast(int arr[],int size, int key){
    int s =0,e =size-1;
    int mid = s + (e - s) /2;
    int ans = -1 ;

    while (s <= e)
    {
        if(arr[mid] == key ){
            ans = mid;
            s = mid + 1 ;
        }else if(key < arr[mid]){
            e = mid -1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }
        mid = s +(e -s) /2;
    }
    
    return ans;
}

int main(){
    int arr [] = {1,2,3,3,5};
    int size= 5;
    int key = 3;
    cout<<searchFirst(arr,size,key);
    cout<<searchLast(arr,size,key);
}