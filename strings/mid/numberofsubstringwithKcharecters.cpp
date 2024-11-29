
#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

// Function to find the longest palindromic substring
string longestPalindrome1(string s) {
    string longest = "";
    int maxLen = 0;

    // Generate all substrings
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            string sub = s.substr(i, j - i + 1);
            
            // Check if the substring is a palindrome
            if (isPalindrome(sub) && sub.size() > maxLen) {
                longest = sub;
                maxLen = sub.size();
            }
        }
    }
    return longest;
}

string longestPalindrome(string s) {

  int start =0,maxlen=0;

  for(int i=0;i<s.size();i++){
    int l = i ,r=i;
    // for the odd 1,3,5;
    while (l>=0 && r<s.size() && s[l]==s[r]) {
      if(r-l+1>maxlen){
        start = l;
        maxlen = r-l+1;
      }
      l--;
      r++;
    }
  
  // for the even 2,4,6;
  l=i,r=i+1;
    while (l>=0 && r<s.size() && s[i]==s[r]) {
          if(r-l+1>maxlen){
        start = l;
        maxlen = r-l+1;
      }
      l--;
      r++;
    }

  }
  return s.substr(start,maxlen);

}

// Main function
int main() {
    string s = "babad";
    cout << "Input: " << s << endl;
    string result = longestPalindrome(s);
    cout << "Longest Palindromic Substring: " << result << endl;
    return 0;
}

