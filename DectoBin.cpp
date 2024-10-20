#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int n ;
    cout << "Enter a number to convert to bin";
    cin >> n;

    int ans = 0;
    int  i = 1;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * i +  ans);

        n = n >> 1;
        i =  i * 10;
    }
    cout << "Binary representation: " << ans << endl;
    return 0;
}