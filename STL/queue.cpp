#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Subham");
    q.push("nayak");

    while(!q.empty())
    {
        cout << q.front()<<" ";
        q.pop();
    }
}