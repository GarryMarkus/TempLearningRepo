#include<bits/stdc++.h>
using namespace std;

int charHash[26]={0};

void charHashing(string s){

    for(int i=0; i<26; i++){
        charHash[s[i] - 'a']++;
    }

}

int main(){

    string s;
    cin >> s;
    charHashing(s);

    char c;
    cout << "Enter alphabet whose frequency is to be known: ";
    cin >> c;

    cout << charHash[c - 'a'];

    return 0;
}