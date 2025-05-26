#include<bits/stdc++.h>
using namespace std;

void print(string str){
    cout << str << endl;
}

int summing(int a, int b){
    return a+b;
}

int main(){
    string s;
    int n1, n2;
    cin >> s;
    cin >> n1 >> n2;

    print(s);
    cout << summing(n1, n2);
    return 0;
}