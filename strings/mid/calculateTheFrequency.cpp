class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;
        int n = s.length();

        // Iterate over all possible starting points of substrings
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0); // Frequency array for characters 'a' to 'z'

            // Iterate over all substrings starting at 'i'
            for (int j = i; j < n; j++) {
                // Update frequency of the current character
                freq[s[j] - 'a']++;

                // Find max and min frequency (ignoring zeros)
                int maxFreq = 0, minFreq = INT_MAX;
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }

                // Update total beauty
                totalBeauty += (maxFreq - minFreq);
            }
        }

        return totalBeauty;
    }
};

