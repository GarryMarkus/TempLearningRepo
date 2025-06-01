#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int arr[t];
    double totalOrange = 0;
    
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
        totalOrange += arr[i];
    }
    
    double result =  totalOrange/t;
    cout << fixed << setprecision(12) << result << endl;
    
    return 0;
}
