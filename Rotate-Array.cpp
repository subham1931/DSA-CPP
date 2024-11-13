#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    vector<int> temp(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        temp[(i+k) % v.size()] = v[i];
    }

    for (int i = 0; i < temp.size(); i++)
    {
        cout<<temp[i]<<" ";
    }
    
    
}