#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
    int absolute_of_x = abs(x);
    int reverse_of_x = 0;
    while(x>0){
        reverse_of_x = reverse_of_x + x%10;
        x = x/10;
        if(x>0){
            reverse_of_x =  reverse_of_x*10;
        }
    }
    if(x<0){
        reverse_of_x = -reverse_of_x;
    }
    return reverse_of_x;
}

int main(){
    int x;
    cin >> x;
    cout << "Reverse of the entered number is: " << reverse(x);
}