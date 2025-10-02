#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    int num;

    for(int i=0; i<2*n; i++){
        cin >> num;
        arr.push_back(num);?
    }

    sort(arr.begin(), arr.end());

    cout << arr[n-1] + arr[n];
}