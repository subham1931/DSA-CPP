#include <iostream>
using namespace std;

int main(){
    int product,discount;

    cout<<"Enter product price : " <<endl;
    cin>> product;

    cout<<"Enter discount : "<<endl;
    cin>> discount;

    int res =  (product * discount) /100;

    cout<<res << "rs off on " <<product <<"rs if we apply "<<discount <<"% discount";



}