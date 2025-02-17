#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int a=0; a<n; a++){
        cin >> arr[a];
    }

    for(int b=0; b<n; b++){
        cout << arr[b] << "  ";
    }
    cout << endl;

    for (int j=0; j<=n-2; j++){
        int min=j;
        for (int k=j; k<=n-1; k++){
            if(arr[k]<arr[min]){
                min=k;
            }
        }
        int temp=0;
            temp=arr[min];
            arr[min]=arr[j];
            arr[j]=temp;
    }

    for(int c=0; c<n; c++){
        cout << arr[c] << "  ";
    }

    return 0;
}