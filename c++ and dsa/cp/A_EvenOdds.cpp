#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n, k, o, e;
    cin >> n >> k;
    o = (n + 1) / 2, e = n / 2;
    if (k <= o) {
        cout << k * 2 - 1 << '\n';
    } else {
        cout << (k - o) * 2 << '\n';
    }
}