#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, C;
        cin >> N >> C;

        vector<int> A(N);
        vector<int> B(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }

        map<int, int> vitamin_to_min_cost;
        for (int i = 0; i < N; i++) {
            if (vitamin_to_min_cost.count(A[i]) == 0) {
                vitamin_to_min_cost[A[i]] = B[i];
            } else {
                vitamin_to_min_cost[A[i]] = min(vitamin_to_min_cost[A[i]], B[i]);
            }
        }

        vector<int> costs;
        for (auto& p : vitamin_to_min_cost) {
            costs.push_back(p.second);
        }

        sort(costs.begin(), costs.end());

        int K = costs.size();
        int Mvalue = 0;
        long long total_cost = 0;

        for (int X = 0; X <= K; X++) {
            if (X > 0) {
                total_cost += costs[X - 1];
            }
            int Y = total_cost;
            int value = C * X - Y;
            Mvalue = max(Mvalue, value);
        }

        cout << Mvalue << endl;
    }

    return 0;
}