#include <bits/stdc++.h>
        vector<int> twoSum(vector<int>& numbers, int target) {
                int n = len(numbers);
                for(int i=0; i<n; i++){
                    for(int j=n-1; j>i; j--){
                        if(numbers[i]+numbers[j]<target){
                            break;
                        }
                        else if(numbers[i]+numbers[j]>target){
                            continue;
                        }
                        else if(numbers[i]+numbers[j]==target){
                            int arr[2]={i+1, j+1};
                        }
                    }
                }
        }
    };