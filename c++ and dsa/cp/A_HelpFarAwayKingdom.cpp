#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    int dot = x.find('.');

    if(dot != -1){
        if(x[dot-1]=='9'){
            cout << "GOTO Vasilisa.";
        }
        else{
            if(x[dot+1]<5){
                cout << x.substr(0, dot);
            }
            else{
                x[dot-1]=string(int(x[dot-1])+1);
                cout << x.substr(0, dot);
            }
        }
    }
    else{
        cout << x;
    }
}