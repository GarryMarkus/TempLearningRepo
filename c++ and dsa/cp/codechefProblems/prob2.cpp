#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        int maxCoins = 0;

        for (int k = 0; k <= N; k++) {
            int zeros = N - k;
            int ones = k;

            int coins1 = zeros * A + ones * B + (zeros * ones * C);
            int coins2 = zeros * A + ones * B + (ones * zeros * D);

            int currentMax = max(coins1, coins2);
            maxCoins = max(maxCoins, currentMax);
        }

        cout << maxCoins << endl;
    }

    return 0;
}