#include <bits/stdc++.h>
using namespace std;

int main(){
    //array is user defined, tell whether sum of first half is greater than second half or not
    
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(n==0){
        cout << "Array size is zero";
        return 0;
    }

    int firstHalf = accumulate(arr, arr + n/2, 0);
    int secondHalf = accumulate(arr + n/2, arr + n, 0);

    if(firstHalf > secondHalf){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;

}