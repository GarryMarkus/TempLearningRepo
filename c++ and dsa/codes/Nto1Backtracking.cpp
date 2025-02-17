#include<bits/stdc++.h>
using namespace std;

void Nt1B(int i, int n){
    if(i>n){
        return;
    }
    Nt1B(i+1, n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    Nt1B(1, n);
    return 0;
}