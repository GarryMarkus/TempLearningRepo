#include<bits/stdc++.h>
using namespace std;

int hashing(int arr[], int max, int f){
    int hashArray[max+1] = {0};
    for(int i=0; i<max; i++){
        hashArray[arr[i]]++;
    }
    return hashArray[f];
}

int main(){
    int f, n, max;
    cout << "Enter number of elements in an array: ";
    cin >> n;
    cout << "Enter the biggest number present in the given array: ";
    cin >> max;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "enter the number:";
    cin >> f;
    cout << hashing(arr, max, f);
    return 0;
}