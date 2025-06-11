#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int l = S.length();
    int count = 1; // Start with 1 since we count the current character
    for (int i = 1; i < l; i++) {
        if (S[i] == S[i - 1]) { // Check if current char matches previous char
            count++;
            if (count >= 7) { // If 7 or more consecutive identical chars
                cout << "YES";
                return 0;
            }
        } else {
            count = 1; // Reset count if chars differ
        }
    }
    cout << "NO";
    return 0;
}