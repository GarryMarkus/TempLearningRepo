#include <bits/stdc++.h>
using namespace std;

int BSearch(int arr[], int low, int high, int item, int n){
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==item){
            return mid;
        }
        else if(arr[mid]<item){
            low=(mid+1);
            BSearch(arr, low, high, item, n);
        }
        else if(arr[mid]>item){
            high=(mid-1);
            BSearch(arr, low, high, item, n);
        }
    }
    return -1;
}

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

    int reqIndex = BSearch(arr, 0, n, search, n);

    if(reqIndex==-1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at index " << reqIndex << endl;
    }
}