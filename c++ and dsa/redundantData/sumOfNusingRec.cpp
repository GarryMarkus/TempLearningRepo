#include<bits/stdc++.h>
using namespace std;

void fsum(int i, int n, int sum){
    if(i>n) {
        cout << sum << endl;
        return;
    }
    fsum(i+1, n, sum+i);
    
}

int main(){
    int n;
    cin >> n;
    fsum(1, n, 0);
    return 0;
}