#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[t];
    int sum[t];
    for(int i=0; i<t; i++){
        cin >> arr[i];
        sum[i]=0;
        sum[i]=(arr[i]%10)+(arr[i]/10);        
    }
    for(int i=0; i<t; i++){
        cout << sum[i] << endl;
    }
    return 0;
}