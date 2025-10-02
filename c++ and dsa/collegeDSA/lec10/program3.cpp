#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums;
    int num;
    while(n--){
        cin >> num;
        nums.push_back(num);
    }

    for(int i=0; i<n; i++){
        int rank=1;
        for(int j=0; i<n; j++){
            if(i!=j && nums[j>nums[i]]){
                rank++;
            }
            cout << rank << " ";
        }
    }
}