//take two number and print their sum using funciton

#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){
  return (num1+num2);
}

int main(){
  int a, b;
  cin >> a >> b;
  cout << sum(a, b);
  return 0;
}
