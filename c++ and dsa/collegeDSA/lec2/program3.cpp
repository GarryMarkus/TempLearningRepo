#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, odd=0, even=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    if(even>odd){
        cout << "Even";
    }
    else if(odd>even){
        cout << "Odd";
    }
    else{
        cout << "Tie";
    }
}