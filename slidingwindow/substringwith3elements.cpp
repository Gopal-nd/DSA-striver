class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int l = 0, r = 0, result = 0;
        unordered_map<char, int> count;
        
        for (r = 0; r < n; r++) {
            count[s[r]]++;
            

   while (count['a'] > 0 && count['b'] > 0 && count['c'] > 0) {
                result += n - r; 
        count[s[l]]--;  
        l++;            
      }
        }
        
        return result;
    }
};

