#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> uniqueChars;
    int maxLength = 0, start = 0;

for(int end=0;end<s.size();end++){
    while (uniqueChars.find(s[end])!=uniqueChars.end()) {
      uniqueChars.erase(s[start]);
      start++;
    }
      uniqueChars.insert(s[end]);
    maxLength = max(maxLength,end-start+1);

  } 
    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << "Longest Substring Without Repeating Characters: " 
         << lengthOfLongestSubstring(s) << endl;
    return 0;
}

