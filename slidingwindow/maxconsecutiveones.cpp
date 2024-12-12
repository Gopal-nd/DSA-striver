class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0, maxlen = 0, zero = 0;

        while (r < n) {
            if (nums[r] == 0) zero++; // Increment zero count for current `r`

            // Shrink the window if there are more than `k` zeros
             (zero > k) {
                if (nums[l] == 0) zero--; // Decrement zero count for current `l`
                l++; // Move the left pointer
            }

            // Update the maximum length
            maxlen = max(maxlen, r - l + 1);
            r++; // Expand the window by moving the right pointer
        }

        return maxlen;
    }
};

