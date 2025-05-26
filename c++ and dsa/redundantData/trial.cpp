#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, n, x;
	cin >> t;
	for(int i=0; i<t; i++){
	    cin >> n >> x;
	    int o=n;
	    int value[n];
	    for(int j=0; j<n; j++){
	        cin >> value[j];
	    }
	    int count[n];
	    for(int k=0; k<n; k++){
	        cin >> count[k];
	    }
	    // int m=1;
	    // long int sum=0;
	    // while(n!=0){
	    //     sum=sum+(value[n-1]*count[n-1]);
	    //     if(sum>=x) break;
	    //     n--;
	    //     m++;
	    // }
	    // if(m>=o) cout << -1 << endl;
	    // else cout << m << endl;
		unordered_map<int, int> hashMap;

	}
    return 0;
}