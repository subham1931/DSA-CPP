#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1, 3, 3, 3, 2, 3, 3};
    int majority = arr[0], count = 1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] == majority){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            majority = arr[i];
            count = 1;
        }
    }
    count = 0;
    for(int num : arr){
        if(num == majority){
            count++;
        }
    }
    if(count > arr.size() / 2){
        cout<<majority<<endl;
    }else{
        cout<<"No majority element"<<endl;
    }
    return 0;
}