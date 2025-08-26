#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, total;
        string s;
        cin >> n >> s;
        if(s=="INT"){
            int arr[n];
            for(int i=0; i<n; i++){
                cin >> arr[i];
            }
            total = accumulate(arr, arr + n, 0);
            cout << total << endl;
        }
        else{
            int wMaxLength=0;
            string word;
            for(int i=0; i<n; i++){
                cin >> word;
                if(word.size()>wMaxLength){
                    wMaxLength = word.size();
                }
            }
            cout << wMaxLength << endl;
        }
    }
}