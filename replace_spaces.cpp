#include<iostream>
using namespace std;

int main(){
    string s = "My name is subham nayak";
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp += "@40";
        }else{
            temp.push_back(s[i]);
        }
        
    }

    cout<<temp;
    
    
}