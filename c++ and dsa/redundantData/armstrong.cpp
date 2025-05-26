#include<bits/stdc++.h>
using namespace std;

int armstrong(int n){
    int ld=0;
    int arm=0;
    while(n>0){
            ld=n%10;
            arm=arm+(ld*ld*ld);
            n=n/10;
    }
    return arm;
}
int main(){
    int num;
    cin >> num;
    
    int arm=armstrong(num);

    if(num==arm) cout<<"Armstrong Number";
    else cout<<"Not an Armstrong Number";

    return 0;
}