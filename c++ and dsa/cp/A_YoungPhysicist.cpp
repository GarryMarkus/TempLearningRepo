#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int xx=0, yy=0, zz=0;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        xx=xx+x;
        yy=yy+y;
        zz=zz+z;
    }
    if(xx==0 && yy==0 && zz==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}