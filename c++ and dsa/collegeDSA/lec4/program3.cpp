#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i = s.size()-1; i>-1; i=i-2){
        cout << s[i];
    }
}