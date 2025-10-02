//jumping number problem, need a revisit

#include <bits/stdc++.h>

using namespace std;

void printJumping(int& x)
{
    int number, temp, lastDigit;
    bool isJumping;

    for (number = 0; number <= x; number++)
    {
        if (number < 10)
        {
            cout << number << " ";
            continue;
        }

        isJumping = true;
        temp = number;
        lastDigit = temp % 10;
        temp /= 10;

        while (temp)
        {
            if (abs(lastDigit - (temp % 10)) != 1)
            {
                isJumping = false;
                break;
            }
            lastDigit = temp % 10;
            temp /= 10;
        }

        if (isJumping)
            cout << number << " ";
    }
}

int main()
{
    int x;
    cin >> x;
    printJumping(x);
    return 0;
}