#include <iostream>
using namespace std;

bool checkEqual(int a[26], int b[26]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1 = "ha";
    string s2 = "subham";
    int count[26] = {0};

    // Counting occurrences in s1
    for (int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        count[index]++;
    }

    int k = s1.length();
    int count2[26] = {0};

    // Initialize the first window in s2
    for (int i = 0; i < k; i++) {
        int index = s2[i] - 'a';
        count2[index]++;
    }

    // Check the first window
    if (checkEqual(count, count2)) {
        cout << "True";
        return 0;
    }

    // Slide the window
    for (int i = k; i < s2.length(); i++) {
        // Include the new character in the window
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        // Remove the old character from the window
        char oldChar = s2[i - k];
        index = oldChar - 'a';
        count2[index]--;

        // Check if the current window matches
        if (checkEqual(count, count2)) {
            cout << "True";
            return 0;
        }
    }

    // If no permutation match is found
    cout << "False";
    return 0;
}
