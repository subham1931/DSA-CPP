#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("Subham");
    s.push("Rohit");
    s.push("Samir");

    cout << "Size : " << s.size() << endl;
    cout << "Stack is empty / not : " << s.empty() << endl;
    while (!s.empty())
    {
        //LIFO
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl
         << "Stack is empty / not : " << s.empty();
}