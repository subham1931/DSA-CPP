#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    list<int> n(5,50);

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    for (int i : n)
    {
        cout << i << " ";
    }
}