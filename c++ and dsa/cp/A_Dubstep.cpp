#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "";
    int i = 0;
    int l = s.size();

    while (i < l) {
        // Check for "WUB"
        if (i + 2 < l && s.substr(i, 3) == "WUB") {
            i += 3;
            // Avoid multiple spaces
            if (!t.empty() && t.back() != ' ')
                t += ' ';
        } else {
            t += s[i];
            i++;
        }
    }

    // Trim trailing space if any
    if (!t.empty() && t.back() == ' ')
        t.pop_back();

    cout << t << endl;
}
