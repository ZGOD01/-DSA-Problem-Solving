#include <iostream>
using namespace std;

bool isPalindrome(int i, string &s) {
    if (i >= s.size() / 2) {
        return true;
    }

    if (s[i] != s[s.size() - i - 1]) {
        return false;
    }

    return isPalindrome(i + 1, s);
}

int main() {
    string s;
    cout << "Enter any string to check Palindrome: ";
    cin >> s;

    cout << isPalindrome(0, s); 
    return 0;
}
