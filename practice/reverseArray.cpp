#include <iostream>
#include <vector>
#include <algorithm> // Required for reverse()

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    // Reverse the entire vector
    reverse(arr.begin(), arr.begin() + 1);
    reverse(arr.begin() +1, arr.end());
    reverse(arr.begin(),arr.end());

    // Print the reversed vector
    // for (int num : arr) {
    //     cout << num << " ";
    // }
    cout<<2%arr.size();

    return 0;
}
