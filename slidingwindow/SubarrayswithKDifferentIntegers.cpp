#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        auto atMost = [&](int target) -> int {
            int l = 0, r = 0, cnt = 0;
            map<int, int> mpp;
            while (r < nums.size()) {
                mpp[nums[r]]++;
                while (mpp.size() > target) {
                    mpp[nums[l]]--;
                    if (mpp[nums[l]] == 0) {
                        mpp.erase(nums[l]);
                    }
                    l++;
                }
                cnt += r - l + 1;
                r++;
            }
            return cnt;
        };
        return atMost(k) - atMost(k - 1);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 1, 2, 3};
    int k = 2;
    int result = sol.subarraysWithKDistinct(nums, k);
    cout << "Number of subarrays with exactly " << k << " distinct integers: " << result << endl;
    return 0;
}

