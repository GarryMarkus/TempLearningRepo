#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << arr[0]+arr[1] << endl;
    cout << arr[n-2]+arr[n-1];
}
