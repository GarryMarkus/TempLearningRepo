#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (int i = 0; i < (int)s.length(); i++) {
        char c = tolower(s[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            result += '.';
            result += c;
        }
    }

    cout << result << '\n';

    return 0;
}
