#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n=s1.size();
    string s3;
    for(int i=0; i<n; i++){
        if(s1[i]==s2[i]){
            s3.push_back('0');
        }
        else{
            s3.push_back('1');
        }
    }
    cout << s3;
}