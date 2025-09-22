#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int maxSum = INT_MIN;
    
    for(int i=0; i<n; i++){
        int currSum = 0;
        for(int j=i; j<n; j++){
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }

    cout << maxSum << endl;
    return 0;

}