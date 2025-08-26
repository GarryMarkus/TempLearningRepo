#include <bits/stdc++.h>
using namespace std;

int LSearch(int arr[], int n, int item, int index){
    if(index>n-1){
        return -1;
    }
    else{
        if(arr[index]==item){
            return index;
        }
        else{
            LSearch(arr, n, item, index+1);
        }
    }
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

    int reqIndex = LSearch(arr, n, search, 0);

    if(reqIndex==-1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at index " <<  reqIndex << endl;
    }

}