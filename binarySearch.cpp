#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int s = 0,e=size-1;
    int mid = (s+e)/2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            s = mid +1;
        }else{
            e = mid - 1;
        }
        
        mid = (s + e) /2;
    }
    
    return -1;
}

int main(){
    int arr[]  = {1,2,3,4,5};
    int key = 4;
    int size = sizeof(arr) /sizeof(arr[0]);

    int ans = binarySearch(arr,size,key);
    if (ans == -1){
        cout<<"KEy not found";
    }else{
        cout<<"Key found at "<<ans<<" index";
    }
}