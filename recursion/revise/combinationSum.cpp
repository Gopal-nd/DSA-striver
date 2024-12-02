#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // Helper function to find combinations
  void findCombination(int ind, int tar, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds) {
    if (ind == arr.size()) {
      if (tar == 0) {
        ans.push_back(ds); // Add the current combination
      }
      return;
    }

    // Include the current element if it doesn't exceed the target
    if (arr[ind] <= tar) {
      ds.push_back(arr[ind]);
      findCombination(ind, tar - arr[ind], arr, ans, ds); // Continue with the same index
      ds.pop_back(); // Backtrack
    }

    // Exclude the current element and move to the next index
    findCombination(ind + 1, tar, arr, ans, ds);
  }

  // Main function to find combinations
  vector<vector<int>> combinationSum(vector<int> &cand, int tar) {
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, tar, cand, ans, ds);
    return ans;
  }
};

int main() {
  Solution obj;

  vector<int> v{2, 3, 6, 7};
  int target = 7;

  vector<vector<int>> ans = obj.combinationSum(v, target);
  cout << "Combinations are: " << endl;
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << endl;
  }

  return 0;
}

