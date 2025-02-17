#include<bits/stdc++.h>
using namespace std;

void printNt(int n, string name, int count){
    if(n == 0) return;
    if(count<n){
        count=count+1;
        cout << name << endl;
        printNt(n, name, count);
    }
    else{
        return;
    }
}

void m2(int i, int n){
    if(i>n){
        return;
    }
    cout << "prem" << endl;
    m2(i+1, n);
}

int main(){
    int count=1;
    int n;
    string name;
    cin >> n;
    //cin >> name;
    //printNt(n, name, count);
    m2(1, n);

    return 0;
}