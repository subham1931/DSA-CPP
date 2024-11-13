#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 0, 0, 3, 12, 0};
    int i = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j] !== 0)
        {
            swap(v[j], v[i]);
            i++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}