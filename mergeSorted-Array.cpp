#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSorted(vector<int> v1, vector<int> v2)
{
    int i = 0, j = 0;
    vector<int> k;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            k.push_back(v1[i]);
            i++;
        }
        else
        {
            k.push_back(v2[j]);
            j++;
        }
    }
    while (/* condition */)
    {
        /* code */
    }
    
    return k;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
}

int main()
{
    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {2, 4, 6};

    vector<int> ans = mergeSorted(v1, v2);

    print(ans);
    return 0;
}