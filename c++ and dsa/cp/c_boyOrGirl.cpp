#include<bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    
    set<char> inputName(input.begin(), input.end());

    if(inputName.size()%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    return 0;
}
