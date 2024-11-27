#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

pair<string, int> longestUniqueSubstring(const string& s) {
    unordered_map<char, int> lastSeen; // To store the last seen position of characters
    int start = 0;                    // Start of the current window
    int maxLength = 0;                // Maximum length of unique substring
    int maxStart = 0;                 // Start position of the longest substring

    for (int end = 0; end < s.length(); end++) {
        char currentChar = s[end];

        // If character is already in the window, move start pointer
        if (lastSeen.find(currentChar) != lastSeen.end() && lastSeen[currentChar] >= start) {
            start = lastSeen[currentChar] + 1;
        }

        // Update the last seen position of the current character
        lastSeen[currentChar] = end;

        // Check if the current window is the longest
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
            maxStart = start;
        }
    }

    // Extract the longest substring
    string longestSubstring = s.substr(maxStart, maxLength);
    return {longestSubstring, maxLength};
}

int main() {
    string input = "abcabcbb";
    auto result = longestUniqueSubstring(input);

    cout << "Longest substring without repeating characters: \"" << result.first 
         << "\" (Length: " << result.second << ")" << endl;

    return 0;
}

