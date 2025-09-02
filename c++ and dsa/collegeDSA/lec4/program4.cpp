#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num;
    cin >> n;
    vector<int> marks;
    for(int i=0; i<n; i++){
        cin >> num;
        marks.push_back(num);
    }

    sort(marks.begin(), marks.end(), greater<int>());
    // reverse(marks.begin(), marks.end());
    int top5 = accumulate(marks.begin(), marks.begin()+5, 0);


    cout << top5 << endl;
    
    for(int j=n-5; j<n; j++){
        cout << marks[j] << " ";
    }
}