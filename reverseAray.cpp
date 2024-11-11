#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0, e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    cout<<endl << "After swap  ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    // int arr[] = {1,2,3,4,5};
    // int start = 0;
    // int end = 4;
    // while (start <= end)
    // {
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    //using vector
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "Before swap ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    vector<int> ans = reverse(v);
    print(ans);
}
