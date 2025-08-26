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

    int low=0, high=n, mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==search){
            cout << "Element found at index " << mid << endl;
            return 0;
        }
        else if(arr[mid]<search){
            low=(mid+1);
            continue;
        }
        else if(arr[mid]>search){
            high=(mid-1);
            continue;
        }
    }
    cout << "Element not found" << endl;
}