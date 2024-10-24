#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a case : ";
    int num;
    cin >> num;
    while (true)
    {
        switch (num)
        {
        case 1:
            cout << "cae 1";
            break;
        case 2:
            cout << "cae 2"; 
            break;

        default:
            break;
        }
        exit(0);
    }
}
