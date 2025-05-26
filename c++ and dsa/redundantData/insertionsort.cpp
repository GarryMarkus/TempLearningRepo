#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    int m=n;
    for(int i=0; i<n; i++){
        int j=0;
        while(arr[j]>arr[j+1]){
            swap(arr[i], arr[i+1]);
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    return 0;
}