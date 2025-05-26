#include<bits/stdc++.h>
using namespace std;
void countDigits(int n){
    int count=0;
    int ld;
    while(n>0){
        count++;
        n=n/10;
    }
    cout << "Total  number of digits in the number " << count;

}

void usingLog(int n){
    int count= log10(n)+1;
    cout << count;
}

int main(){
    int n;
    cin >> n;
    usingLog(n);
    return 0;
}