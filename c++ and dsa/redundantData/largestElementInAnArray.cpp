#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int lar=arr[0];
    int i=0;
    while(i<n){
        if(lar<arr[i]) lar=arr[i];

        i++;
    }
    cout << lar;
    return 0;
}
