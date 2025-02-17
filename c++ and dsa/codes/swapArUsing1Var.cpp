#include<bits/stdc++.h>
using namespace std;

void swapAr(int i, int n, int ar[]){
    if(i>=n/2)  return;
    swap(ar[i], ar[n-i-1]);
    swapAr(i+1, n, ar);
}

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int k=0; k<n; k++){
        cin >> ar[k];
    }
    swapAr(0,n,ar);
    for(int k=0; k<n; k++){
        cout << ar[k] << " ";
    }
    return 0;
}