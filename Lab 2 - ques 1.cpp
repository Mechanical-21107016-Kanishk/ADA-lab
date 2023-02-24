// Lab 2 - ques 1
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int l, int r){
    if (s.length() == 0 || l < 0 || r < 0) 
        return false;

    if (l >= r)
        return true;

    if (s[l] == s[r])
        return isPalindrome(s, l + 1, r - 1);

    return false;
 }

int main() {
    string s{"abccba"};

    cout << s << " is " << (isPalindrome(s, 0, s.length() - 1) ? "a palindrome." : "not a palindrome");
}
