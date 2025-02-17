#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        string t = ""; 
        for(int i = 0; i < n; i++){
            t += (s[i] == '0') ? '1' : '0';
        }
        cout << t << endl; 
    }
    return 0;
}
