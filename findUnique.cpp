#include <iostream>
using namespace std;

int main(){
    int arr[100] = {1,2,1,2,3};
    int ans = 0;
    for (int i = 0; i<5; i++){
        ans = ans ^ arr[i];
    }

    cout<<ans;
}