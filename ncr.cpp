#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;

    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int ncr(int n,int r){
    int num = fact(n);
    int denom = fact(r) * fact(n-r);
    return num / denom;
}

int main(){
    int n,r;
    cout <<"Enter n and r"<<endl;
    cin>>n>>r;
    int res = ncr(n,r);
    cout << res;
}