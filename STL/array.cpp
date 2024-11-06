#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[] = {1, 2, 3, 4, 5};
    array<int, 5> a = {1, 2, 3, 4, 5};
    cout << a.size() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.at(1) << endl;

    cout << "Printing array......" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}