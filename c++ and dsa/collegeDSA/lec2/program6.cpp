#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        int arr[n], average, max, min;
        float total=0;
        for(int j=0; j<n; j++){
            cin >> arr[j];
            total = total + arr[j];
        }
        cout << *max_element(arr, arr + n) << " " << *min_element(arr, arr + n) << " ";
        cout << fixed << setprecision(0) << total << " ";
        cout << fixed << setprecision(1) << total/n << endl;
    }
}