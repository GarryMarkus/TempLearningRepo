// difference between passing by value and passing by reference in a function

#include<bits/stdc++.h>
using namespace std;

void twice(int a){ //passing the value
  cout << a << endl;
  a += a;
  cout << a << endl;
}

void thrice(int &b){ //passing by reference
  cout << b << endl;
  b = 3*b;
  cout << b << endl;
}

int main(){
  int a, b;
  cin >> a >> b;
  twice(a);
  cout << a <<" the original value doesn't got affected" << endl;

  thrice(b);
  cout << b << " the original value is now changed" << endl;

  return 0;
}
