#include<bits/stdc++.h>
using namespace std;

int main(){
    string c;
    cin >> c;
    int l;
    l = c.size();
    for(int i=0; i<l; i++){
        if(c[i]=='H'||c[i]=='Q'||c[i]=='9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}