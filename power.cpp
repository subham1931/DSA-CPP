#include <iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for (int  i = 0; i < b; i++){
        ans = ans * a;
    }

    return ans;
}

int main(){
    cout << "Enter a number for find squre: ";
    int a;
    cin>>a;

    int b = 2;

    int ans = power(a,b);

    cout << ans;
    return  0;

}