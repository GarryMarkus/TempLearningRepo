#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    
    //finding pair of elements with sum k using the double pointer approach
    int i=0, j=n-1;
    while(i<j){
        if(arr[i] + arr[j] == k){
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            j--;
        }
        else if(arr[i] + arr[j] < k){
            i++;
        }
        else{
            j--;
        }
    }
}