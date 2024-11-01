#include <iostream>
using namespace std;

int isPossible(int arr[],int size,int mid , int k){
    int painter = 1;
    int boaardPainted = 0;

    for (int i = 0; i < size; i++)
    {
        if (boaardPainted + arr[i] <= mid)
        {
            boaardPainted += arr[i];
        }else{
            painter++;
            if (painter > k || arr[i] > mid)
            {
                return false;
            }
            boaardPainted = arr[i];
        }
        
    }
    return true;
    
}

int main()
{
    int arr[] = {5, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int s = 0, e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    int k = 2;

    while (s <= e)
    {
        if(isPossible(arr, size, mid, k)){
            ans = mid;
            e = mid -1;
        }else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    cout<<"minimum time require : " << ans;
}