#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // Helper function to calculate subarrays with sum <= given goal
        auto atMost = [&](int target) -> int {
            if (target < 0) return 0; // If the target is negative, there are no valid subarrays
            int l = 0, r = 0, sum = 0, cnt = 0;
            while (r < nums.size()) {
                sum += nums[r];
                while (sum > target) {
                    sum -= nums[l];
                    l++;
                }
                cnt += r - l + 1; // Add subarrays ending at r
                r++;
            }
            return cnt;
        };

        // Subarrays with exact sum = subarrays with sum <= goal - subarrays with sum < goal
        return atMost(goal) - atMost(goal - 1);
    }
};

int main() {
    // Input test case
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;

    // Create an instance of the solution class
    Solution sol;

    // Call the function and display the result
    int result = sol.numSubarraysWithSum(nums, goal);
    cout << "Number of subarrays with sum " << goal << ": " << result << endl;

    return 0;
}

