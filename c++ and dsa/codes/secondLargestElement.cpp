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
//lar
    int slar=arr[0];
    for(int i=0; i<n; i++){
        if(slar<arr[i] && slar!=lar) slar=arr[i];

        i++;    
    }

    return 0;
}
