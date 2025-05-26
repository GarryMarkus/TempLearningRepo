#include<bits/stdc++.h>
using namespace std;

int a[100];

void swapar(int i, int j){
    if(i>=j)    return;
    swap(a[i], a[j]);
    swapar(i+1, j-1);
}

int main(){
    int n;
    cout << "Enter number of elements to enter in the array: " << endl;
    cin >> n;
    cout << "Enter elements in the array: " << endl;
    for(int k=0; k<n; k++){
        cin >> a[k];
    }
    swapar(0,n-1);
    cout << "The new  array is: " << endl;
    for(int k=0; k<n; k++){
        cout << a[k] << " ";
    }
    return 0;
}