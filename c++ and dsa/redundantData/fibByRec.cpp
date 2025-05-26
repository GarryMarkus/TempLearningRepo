#include<bits/stdc++.h>
using namespace std;

void fib(int i, int j, int c, int n){
    if(c>n)     return;
    if(c==n)    cout << i << " ";
    c++;
    fib(j, i+j, c, n);
}

int main(){
    int n;
    cout << "Enter the fibonacci term number you want to print: " << endl;
    cin >> n;
    int c=1;
    fib(0, 1, c, n);
    return 0;
}