#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        int sum = 0;
        for(int k = 0; k < n; k++) {
            sum += arr[k];
            for(int l = k; l < n; l++) {
                arr[l] = arr[l] - 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}