#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string S;
    cin >> S;

    int count=0;

    for(int i=0; i<t; i++){
        if(S[i]==S[i+1]){
            count++;
        }
    }

    cout << count ;
}