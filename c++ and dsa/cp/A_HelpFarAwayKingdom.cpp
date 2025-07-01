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
            if(x[dot+1]<'5'){
                cout << x.substr(0, dot);
            }
            else{
                int x2 = int(x[dot-1]);
                x2=x2+1;
                x[dot-1]=x2;
                cout << x.substr(0, dot);
            }
        }
    }
    else{
        cout << x;
    }
}