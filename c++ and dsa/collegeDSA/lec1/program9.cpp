#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int Count1 = count(s.begin(), s.end(), '&');
    int Count2 = count(s.begin(), s.end(), '#');
    int length = s.length();
    if(Count1>0 && Count2>0 && length%2==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}   