#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string s, int start, int end) {
    if (start >= end) { // Base case: pointers have crossed
        return true;
    }
    if (s[start] != s[end]) { // Characters do not match
        return false;
    }
    return isPalindrome(s, start+1,end-1); // Recursive call with updated pointers
}

int main() {
    string s = "madamq";
    int n = s.size(); // Get the size of the string
    cout << "Length of the string: " << n << endl;

    // Check if the string is a palindrome
    bool pal = isPalindrome(s, 0, n - 1); // Start from first and last index
    cout << (pal ? "The string is a palindrome." : "The string is not a palindrome.") << endl;

    return 0;
}
