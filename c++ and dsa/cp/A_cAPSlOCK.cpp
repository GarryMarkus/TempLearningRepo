#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    bool condition1 = true; 
    bool condition2 = true; 

    for (int i = 1; i < n; i++) {
        if (!isupper(s[i])) condition1 = false;
    }
    for (int i = 0; i < n; i++) {
        if (!isupper(s[i])) condition2 = false;
    }

    if (condition1 || condition2) {
        for (int i = 0; i < n; i++) {
            if (isupper(s[i])) s[i] = tolower(s[i]);
            else s[i] = toupper(s[i]);
        }
    }

    cout << s;
}
