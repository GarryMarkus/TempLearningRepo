#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements in the array: " << endl;
    cin >> n;
    int arr[n];

    cout << "" << endl;
    //entering values of array
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //declaring hash array and precomputation i.e. counting number of time each value appear
    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }

    int check;
    cin >> check;
    cout << hash[check];
    return 0;
}