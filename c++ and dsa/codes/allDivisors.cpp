#include<bits/stdc++.h>
using namespace std;

void div(int n){
    vector<int> ls;
    for(int i=1; i<=sqrt(n); i++){ //can replace i<=sqrt(n) by i*i<=n
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
       }
    }
    //to sort the vector created above which contains divisors
    sort(ls.begin(), ls.end());
    //printing the vector
    for(auto it:ls) cout << it << " ";
}

int main(){
    int num;
    cin>>num;
    div(num);
    return 0;
}