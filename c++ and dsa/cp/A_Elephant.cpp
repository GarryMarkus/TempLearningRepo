#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n%5>0){
        int steps=(n/5)+1;
        cout << steps;
    }
    else {
        int steps=(n/5);
        cout << steps;
    }
}