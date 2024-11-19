#include <iostream>
using namespace std;

void printCharacter(char ch[])
{
    cout << ch;
}

int getLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int reverser(char ch[])
{
    int start = 0;
    int end = getLength(ch) - 1;

    while (start < end)
    {
        swap(ch[start++], ch[end--]);
    }
}

int main()
{
    char ch[20] = "subham";

    printCharacter(ch);

    int ans = getLength(ch);
    cout << endl
         << "Size of char Array : " << ans << endl;

    reverser(ch);

    printCharacter(ch);
}