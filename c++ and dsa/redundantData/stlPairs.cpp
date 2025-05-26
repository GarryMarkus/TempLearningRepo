#include<bits/stdc++.h>
using namespace std;

int main(){
    // pair
    pair<int, int> p1 = {3, 4};
    cout << p1.first << " " << p1.second << endl;

    //nested pair
    pair<int, pair<float, pair<int, float> >>p2 = {3, { 4.1, { 2, 6.7}}};
    cout << p2.second.second.first << endl;
    cout << p2.second.second.second << endl;

    //array of pair datatype
    pair<int, int> arr[] = {{3,2}, {2, 1}, {4,6}};
    cout << arr[1].second; 
    
    return 0;
}