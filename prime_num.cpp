#include <iostream>
using namespace std;

int isPrime(int n){
    for (int  i = 1; i <n; i++){
        if(n % 2 == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n ;
    cout << "Enter  a number for check isPrime : ";
    cin>>n;

    int res = isPrime(n);

    if (isPrime(n)){
        cout <<n << " is a Prime Number";
    }else{
        cout <<n <<" is not a prime number";
    }

}