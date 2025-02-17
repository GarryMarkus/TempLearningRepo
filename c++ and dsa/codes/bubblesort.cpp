#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    int m=n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    while(n!=0){
        for(int i=0; i<n; i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        n--;
    }
    for(int i=0; i<m; i++){
        cout << arr[i] << " ";
    }
    return 0;
}