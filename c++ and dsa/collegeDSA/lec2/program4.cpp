#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {1, 2, 4, 5};
    int max = *max_element(arr, arr + 4);
    int min = *min_element(arr, arr + 4);

    cout << max << endl;
    cout << min << endl;
}