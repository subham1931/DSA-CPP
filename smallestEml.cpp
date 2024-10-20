#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,5,1,3};
    int min  = arr[0];
    for(int i=0; i<4; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }    

    cout << min <<endl;
    return 0;
}
