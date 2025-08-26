#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int arr[n];
        for(int j=0; j<n; j++){
            cin >> arr[j];
        }
        int max = *max_element(arr, arr + n);
        cout << max << endl;

    }

}