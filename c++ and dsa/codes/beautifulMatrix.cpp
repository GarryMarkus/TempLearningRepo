#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
            if (arr[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
    int k, l;
    k=a-2;
    l=b-2;
    k=abs(k);
    l=abs(l);
    cout << k+l;
    return 0;
}