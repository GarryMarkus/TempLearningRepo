#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    //taking values for the array
    for(int i=0; i<n;  i++){
        cin >> arr[i];
    }

    //pre-computer i.e. calculating the count of each elemnt
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++; //value of key at mpp[x] will be increased by 1 if encountered
        // if arr[i] return 1, then value of key 1 in mpp will increment by 1 
    }

    //now asking for the values to be know count of by the user
    int l;
    cin >> l;
    for(int i=0; i<l; i++){
        int num;
        cin >> num;
        //fetching the count of occurence of num in our mpp
        cout << mpp[num] << endl;
    }

    return 0;
}