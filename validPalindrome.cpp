#include <iostream>
using namespace std;

bool validString(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (validString(s[i]))
        {
            // cout << s[i];
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                temp.push_back(s[i] + ('a' - 'A'));
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
    }

    int i = 0,j =temp.length() -1;
    bool isPalindrome = true;
    while (i < j)
    {
        if (temp[i] != temp[j])
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
        
    }

    if (isPalindrome)
    {
        cout<<true;
    }else{
        cout<<false;
    }
    
    
    

    // cout<<endl<<temp;
}