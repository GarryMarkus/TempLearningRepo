#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {10, 200, 30, 40, 500, 89, 100};
    int sum1 = accumulate(arr, arr+7, 0);
    int sum2 = accumulate(arr, arr+3, 0);
    int sum3 = accumulate(arr + 1, arr+3, 0);

    cout << sum1 << " " << sum2 << " " << sum3;
}