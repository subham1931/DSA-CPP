#include<iostream>
using namespace std;

int main(){
    string s = "daabcbaabcbc";
    string sub = "abc";
    while (s.length() != 0 && s.find(sub) < s.length())
    {
        s.erase(s.find(sub),sub.length());
    }

    cout<<s;
    
}