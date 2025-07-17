#include <bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin >> s;
    s++;
    for(s; s<10000; s++){
        string k = to_string(s);
        if(k[0]!=k[1]&&k[0]!=k[2]&&k[0]!=k[3]&&k[1]!=k[2]&&k[1]!=k[3]&&k[2]!=k[3]){
            cout << k;
            break;
        }
    }
}