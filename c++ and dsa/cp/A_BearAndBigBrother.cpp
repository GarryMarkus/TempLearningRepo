#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int flag = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        flag++;
    }
    cout << flag;
    return 0;
}