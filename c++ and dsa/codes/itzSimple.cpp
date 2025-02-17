#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t, n, k, p;
    int c_sum=0;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> k >> p;
        int chair[n];
        for(int j=0; j<n; j++){
            cin >> chair[j];
        }
        sort(chair, chair+n);
        for(int k=0; k<(n-1); k++){
            c_sum=c_sum+chair[k];
        }
        if((c_sum+p)>(k+chair[n-1])) cout << "Varun" << endl;
        else if((c_sum+p)<(k+chair[n-1])) cout << "Ved" << endl;
        else cout << "Equal" << endl;
        c_sum=0;
    }
    return 0;
}
