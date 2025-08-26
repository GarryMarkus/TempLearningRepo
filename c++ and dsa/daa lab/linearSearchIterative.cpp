#include <bits/stdc++.h>
using namespace std;

int main(){
    
    cout << "Enter the size of the array: " << endl;

    int n;
    cin >> n;
    int arr[n];

    cout << "Enter the values of the array: " << endl;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int search;
    cout << "Enter the value to search in the array: " << endl;
    cin >> search;


    for(int j=0; j<n; j++){
        if(arr[j]==search){
            cout << "Element found at index " << j << endl;
            return 0;
        }
    }
    cout << "Element not found" << endl;
}