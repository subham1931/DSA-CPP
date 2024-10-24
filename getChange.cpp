#include <iostream>
using namespace std;


int main(){
    int amount = 13000;
    cout<<"Enter amount for check : ";
    cin>>amount;

    int c;
    cout<<"Enter \n 1. for 100rs \n 2. for 50rs \n 3. for 20rs \n 4. for 10rs"<<endl;
    cin>>c;

    while (true)
    {
        switch (c)
        {
        case 1:
            cout << amount / 100<< " 100rs you will get"<<endl;
            break;
        case 2:
            cout << amount / 50<< " 50rs you will get"<<endl;
            break;
        case 3:
            cout << amount / 20<< " 20rs you will get"<<endl;
            break;
        case 4:
            cout << amount / 10<< " 10rs you will get"<<endl;
            break;
        
        default:
            break;
        }
    exit(0);
    }
    
    return 0;
}