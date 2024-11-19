#include<iostream>
using namespace std;

int main(){
    string s = "testsample";
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        int ch = s[i];
        int n = 0;
        if (ch >= 'a' && ch<= 'z')
        {
            n =  ch - 'a';
        }else{
            n = ch - 'A';
        }
        cout<<arr[n]++;
    }

    int maxi = -1,ans = 0;

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxi)
        {
            ans = i;
            maxi = arr[i];
        }
        
    }

    char finalAns  = 'a' + ans;
    cout<<endl<<finalAns;
    
    
}