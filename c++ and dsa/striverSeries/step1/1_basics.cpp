#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout << a << endl;
    cout << "Hello World" << endl;
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } 
    else {
        cout << "You are not an adult." << endl;
    }

    char grade;
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        default:
            cout << "Not specified." << endl;
    }
    return 0;
}