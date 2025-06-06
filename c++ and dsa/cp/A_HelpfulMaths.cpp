#include<bits/stdc++.h>
using namespace std;

int main(){

    string equation;
    cin >> equation;

    int l = equation.size();
    int sum[l]={0};

    for(int i=0; i<l; i=i+2){
        sum[i]=equation[i];

    }

    return 0;
}