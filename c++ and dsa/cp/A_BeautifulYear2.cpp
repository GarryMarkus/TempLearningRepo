#include <iostream>
#include <string>
#include <set> // or <unordered_set>

// Function to check if a number has distinct digits
bool hasDistinctDigits(int num) {
    std::string s = std::to_string(num);
    std::set<char> distinct_digits;
    for (char c : s) {
        if (distinct_digits.count(c)) { // If digit already exists
            return false;
        }
        distinct_digits.insert(c);
    }
    return true; // All digits are distinct
}

int main() {
    int y;
    std::cin >> y;

    int current_year = y + 1;
    while (true) {
        if (hasDistinctDigits(current_year)) {
            std::cout << current_year << std::endl;
            break; // Found the beautiful year, exit loop
        }
        current_year++;
    }

    return 0;
}