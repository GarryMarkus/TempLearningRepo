#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> k >> n;
    for(int i=0; i<n; i++){
        if(k%10!=0){
            k=k-1;
        }
        else{
            k=k/10;
        }
    }
    cout << k;
}