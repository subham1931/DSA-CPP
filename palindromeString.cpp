#include <iostream>
using namespace std;

string lowerString(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + ('a' - 'A');
        }
    }

    return s;
}

int main()
{
    string s1;
    cout << "Enter an string for checking palindrome : " << endl;
    cin >> s1;
    bool isPalindrome = true;

    string vString = lowerString(s1);
    // cout << vString << endl;
    int s = 0;
    int e = s1.size() - 1;
    while (s < e)
    {
        if (vString[s] != vString[e])
        {
            isPalindrome = false;
            break;
        }
        s++;
        e--;
    }

    if (isPalindrome)
    {
        cout << "It was an Palindrome string";
    }
    else
    {
        cout << "It was not an Palindrome string";
    }
}