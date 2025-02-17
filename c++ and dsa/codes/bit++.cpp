#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    string a;
    cin >> x;
    int t=0;
    for(int i=0; i<x; i++){
        cin >> a;
        if(a=="++X") ++t;
        if(a=="X++") t++;
        if(a=="--X") --t;
        if(a=="X--") t--;
    }
    cout << t;
    return 0;
}