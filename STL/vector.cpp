#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    cout<<"Capacity = "<<v.capacity()<<endl;
    cout<<"Size = "<<v.size()<<endl;

    vector<int> a(5,1);
    cout<<"Print a vector"<<endl;
    cout<<"Capacity : "<<a.capacity()<<endl;
    cout<<"Size : "<<a.size()<<endl;
    for (int i : a)
    {
        cout<<i<<" ";
    }
    
}