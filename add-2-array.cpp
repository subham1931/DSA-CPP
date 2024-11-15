#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {6, 7, 8, 9, 10};
    vector<int> res;

    int i = v1.size() - 1;
    int j = v2.size() - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int sum = v1[i] + v2[j] + carry;
        carry = sum / 10;
        int ans = sum % 10;
        res.push_back(ans);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = v1[i] + carry;
        carry = sum / 10;
        int ans = sum % 10;
        res.push_back(ans);
        i--;
    }
    while (j >= 0)
    {
        int sum = v2[j] + carry;
        carry = sum / 10;
        int ans = sum % 10;
        res.push_back(ans);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        int ans = sum % 10;
        res.push_back(ans);
    }

    cout<<"V1 Array : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl<<"V2 Array : ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl<<"res Array: ";
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i] << " ";
    }
}