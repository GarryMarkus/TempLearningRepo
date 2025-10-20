// Codeforces Round 1054 (Div. 3) 
// A. Be Positive

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int count=0;
        int flag=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==0){
                count++;
            }
            else if(arr[i]==-1){
                flag++;
            }
        }
        if(flag%2==0){
            cout << count << endl;
        }
        else{
            cout << count + 2 << endl;
        }
    }
}