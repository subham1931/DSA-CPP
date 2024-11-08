#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_front(1);
    d.push_back(5);
    cout << "Printing size : " << d.size() << endl;

    cout << "Printing first elememnt : " << d.at(0) << endl;
    cout << "Empty or Not : " << d.empty() << endl;

    cout << "front element : " << d.front() << endl;
    cout << "Back element : " << d.back() << endl;

    d.erase(d.begin(), d.begin() + 1);
    cout<<"After Erase"<<endl;

    for (int i : d)
    {
        cout<<i<<" ";
    }
    
}