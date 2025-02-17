#include<bits/stdc++.h>
using namespace std;

void printL(int i, int n){
    if(i>n){
        return;
    }
    cout << i << endl;
    printL(i+1,n);
}

int main(){
    int n;
    cin >> n;
    printL(1,n);
    return 0;
}