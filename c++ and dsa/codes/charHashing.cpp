#include<bits/stdc++.h>
using namespace std;
/*
only for lower case letters, for making the same program for all the alphabetical character, 
increase hash size to 256 and for each hash index, 
remove [-'a'] part from it, then each character will be counted at its ASCII value index

int main(){
    string s;
    cin >> s;

    //precompute
    int hash[256]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    //fetch value of respected entry
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        cout << hash[c-'a'] << endl;
    }


    return 0;
}
*/
int main(){
    string s;
    cin >> s;

    //precompute
    int hash[26]={0};
    for(int i=0; i<s.size(); i++){  //size function return size of the string given in s
        hash[s[i]-'a']++;
    }

    //fetch value of respected entry
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        cout << hash[c-'a'] << endl;
    }


    return 0;
}