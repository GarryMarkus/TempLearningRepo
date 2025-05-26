#include<bits/stdc++.h>
using namespace std;
void reverseNum(int n){
    int ld=0;
    while(n>0){
            ld=n%10;
            cout << ld;
            n=n/10;
    }
}

int reverseNum2(int n){
    int ld=0;
    int revnum=0;
    while(n>0){
            ld=n%10;
            n=n/10;
            revnum=(revnum*10)+ld;
    }
}
int main(){
    int n;
    cin >> n;
    reverseNum(n);
    return 0;
}