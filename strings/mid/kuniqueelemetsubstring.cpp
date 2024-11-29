#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

// Function to count substrings with exactly k unique characters (Brute Force approach)
int countKUniqueBruteForce1(string s, int k) {
    int count = 0;
    int n = s.length();

    // Generate all possible substrings
    for (int i = 0; i < n; i++) {
        unordered_set<char> unique_chars;
        
        // For each substring starting at i, add characters one by one
        for (int j = i; j < n; j++) {
            unique_chars.insert(s[j]);
            
            // If the substring has exactly k unique characters, increase count
            if (unique_chars.size() == k) {
                count++;
            }
        }
    }

    return count;
}

int countKUnique(string s,int k){
  unordered_map<char,int> hash;
  int start = 0,end =0;
  int count =0;
  while (end<s.size()) {
    hash[s[end]]++;
    while (hash.size()>k) {
      hash[s[start]]--;
      if(hash[s[start]]==0){
        hash.erase(s[start]);
      }
      start++;
    }
    if(hash.size()==k){
      count+=end-start+1;
    }
    end++;
  }
  return count;
}


int main() {
    string s = "abcba";
    int k = 2;

    cout << "Input: " << s << ", k = " << k << endl;
    int result = countKUnique(s, k);
    cout << "Number of substrings with exactly " << k << " unique characters: " << result << endl;

    return 0;
}

