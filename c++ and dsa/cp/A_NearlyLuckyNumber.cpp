#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;

    int l=n.length();
    int digits=0;
    for(int i=0; i<l; i++){
        if(n[i]=='4' || n[i]=='7'){
            digits++;
        }
    }
    if(digits==4 || digits==7){
        cout << "YES";
    }
    else cout << "NO";
}