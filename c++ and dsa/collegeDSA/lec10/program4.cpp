#include<bits/stdc++.h>
using namespace std;

void moveAllZeroes(int n, int arr[]){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count++;
            for(int j=i; j<n; j++){
                arr[j] = arr[j+1];;
            }
            i--;
        }
    }

    while(count--){
        arr[n-1]==0;
        n--;
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    moveAllZeroes(n, arr);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}