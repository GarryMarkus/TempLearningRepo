#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, y;
    cin >> n >> y;
    int x = n*y;
    if(x>9999 && x<=99999){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}