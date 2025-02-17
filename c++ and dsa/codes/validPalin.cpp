// #include<bits/stdc++.h>
// using namespace std;
// bool isPalindrome(string s) {
//         for(int i=0; i<s.size(); i++){
//             if(isspace(s[i])){
//                 s[i]=s[i+1];
//             }
//             else if(ispunct(s[i])){
//                 s[i]=s[i+1];
//             }
//         }
//         for(int i=0; i<s.size(); i++){
//             s[i]=tolower(s[i]);
//         }
//         int flag=0;
//         for(int i=0; i<s.size(); i++){
//             if(s[i]!=s[s.size()-1-i]){
//                 flag++;
//             }
//         }
//         if(flag==0) return true;
//         else return false;
// }

// int main(){
//     string s;
//     cin >> s;
//     isPalindrome(s);
// }
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        // Move left pointer to the next valid character
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // Move right pointer to the previous valid character
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        
        // Compare characters (case insensitive)
        if (tolower(s[left]) != tolower(s[right])) {
            return false; // Not a palindrome
        }
        
        // Move both pointers inward
        left++;
        right--;
    }
    
    return true; // It's a palindrome
}

int main() {
    string s;
    getline(cin, s); // Use getline to read the entire line including spaces
    if (isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}