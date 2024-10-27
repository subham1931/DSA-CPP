#include <iostream>
using namespace std;

int firstOccurance(int arr[],int size, int key){
    int s = 0, e = size-1;
    int mid = s + (e-s) /2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        if(key < arr[mid]){
            e = mid -1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }
        mid = s + (e -s) /2 ;
        
    }
    return ans;
    
}

int lastOccurance(int arr[],int size,int key){
    int s = 0,e = size-1;
    int mid = s + (e-s) /2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid+1;
        }
        if(key < arr[mid]){
            e = mid - 1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }

        mid = s + (e - s) /2;
    }
    return ans;
    
}

int main(){
    int arr[] = {1,2,3,3,3,3,5};
    // int size = sizeof(arr) /sizeof(arr[0])
    int size = 7;
    int key = 3;

    int first = firstOccurance(arr,size,key);
    int last = lastOccurance(arr,size,key);
    int total = (last - first) + 1;
    // cout<<first<<" "<<last;
    cout<<total;
}