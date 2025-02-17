#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        int n=str.size();
        if(n<=10) cout << str << endl;
        else cout << str[0] << n-2 << str[n-1] << endl;
    }
    return 0;
}