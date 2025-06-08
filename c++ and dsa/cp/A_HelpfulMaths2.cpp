#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialising string for input
    string s;
    cin >> s;

    int lens = s.length();

    // Extracting and storing numerics in another array
    vector<int> arr;
    for (int i = 0; i < lens; i += 2) { // Step by 2 to skip '+'
        arr.push_back(s[i] - '0'); // Convert char to int
    }

    // Increasing order sorted array
    sort(arr.begin(), arr.end());

    // Printing
    for (int j = 0; j < arr.size(); j++) {
        cout << arr[j];
        if (j < arr.size() - 1) { // Print '+' only between numbers
            cout << "+";
        }
    }
    cout << endl; // Print newline at the end

    return 0;
}