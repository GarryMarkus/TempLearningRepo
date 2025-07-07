#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int l, a=0, d=0;
    cin >> l;
    cin >> s;

    for(int i=0; i<l; i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }

    if(a>d){
        cout << "Anton"; 
    }
    else if(a<d){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
}