#include<bits/stdc++.h>
using namespace std;

void printL(int i, int n){
    if(i>n){
        return;
    }
    cout << n << endl;
    printL(1, n-1);
}

int main(){
    int n;
    cin >> n;
    printL(1, n);
    return 0;
}