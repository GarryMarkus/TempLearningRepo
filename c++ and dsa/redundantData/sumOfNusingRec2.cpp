#include<bits/stdc++.h>
using namespace std;

int sum=0;

int sumf(int n){
    if(n==0)    return 0;
    else    return n+sumf(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << sumf(n);
    return 0;
}