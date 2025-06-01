#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int out=0;
    cin >> t;
    int arr[t][4];
    for(int i=0; i<t; i++){
        int count=0;
        for(int j=0; j<3; j++){
            cin >>arr[i][j];
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>=2){
            out++;
        }
    }

    cout << out;

    return 0;
}