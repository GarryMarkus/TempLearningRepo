#include<bits/stdc++.h>
using namespace std;
 int main(){
   int n, k;
   cin >> n >> k;
   int arr[n];
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }
   for(int i=k-1; i<n; i++){
      if(arr[i]>0){
         if(arr[i]==arr[i+1]){
         k++;
         }
         else if(arr[i]!=arr[i+1]){
            break;
         }
      }
      else{
         for(int i=0; i<n; i++){
            if(arr[i]==0){
               cout << i;
               break;
            }
         }
         return 0;
      }
   }
   cout << k;
   return 0;
 }