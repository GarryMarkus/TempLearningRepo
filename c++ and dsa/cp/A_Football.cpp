#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, aa=0, bb=0;
    string a, b, c;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> c;
        if(i==0){
            a = c;
            aa++;
        }
        else{
            if(a!=c){
                b=c;
                bb++;
            }
            else{
                aa++;
            }
        }
    }
    if(aa>bb){
        cout << a;
    }
    else{
        cout << b;
    }
}