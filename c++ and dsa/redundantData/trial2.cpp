#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        map<int, int> day_penalty;

        for (int i = 0; i < n; i++) {
            int penalty = i + 1;
            day_penalty[arr[i]] = max(day_penalty[arr[i]], penalty);
        }

        int total_penalty = 0;
        for (auto &entry : day_penalty) {
            total_penalty += entry.second;
        }

        cout << total_penalty << endl;
    }
    return 0;
}
