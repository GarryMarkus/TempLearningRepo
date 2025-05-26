#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, count[3], each_know;
    int total_know=0;
    cin >> t;
    for(int i=0; i<t; i++){
        for(int j=0; j<3; j++){
            cin >> count[j];
        }
        each_know=count[0]+count[1]+count[2];
        if(each_know>=2) total_know++;
    }
    cout << total_know;
    return 0;
}