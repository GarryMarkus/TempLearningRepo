#include<bits/stdc++.h>
using namespace std;

void OtNb(int i, int N){
    if(i<1){
        return;
    }
    OtNb(i-1, N);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    OtNb(n, n);
    return 0;
}