#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    if(m%2==0 && n%2==0){
        cout << m*n/2;
    }
    else if(m%2==0 && n%2!=0){
        cout << (m/2)+n;
    }
    else if(n%2==0 && m%2!=0){
        cout << (n/2)+m;
    }
    else{
        if(m>n){
            cout << ((m-1)*n)/2;
        }
        else{
            cout << ((n-1)*m)/2;
        }
    }
    return 0;
}