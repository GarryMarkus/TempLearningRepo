#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int l = s.size();

    for(int i=0; i<l; i++){
        int asciiValue = s[i];
        if(asciiValue%2 != 0){
            cout << s[i] << " ";
        }
    }
}