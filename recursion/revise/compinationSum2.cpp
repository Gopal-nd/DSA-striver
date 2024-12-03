
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // Helper function to find combinations
  void findCombination(int ind, int tar, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds) {
    if(tar ==0){
      ans.push_back(ds);
      return;
    }  
    for(int i=ind;i<arr.size();i++){
      if(i>ind && arr[i] == arr[i-1]) continue;
      if(arr[i]>tar) break;
      ds.push_back(arr[i]);
      findCombination(i+1,tar-arr[i],arr,ans,ds);
      ds.pop_back();
    }

  }

  // Main function to find combinations
  vector<vector<int>> combinationSum(vector<int> &cand, int tar) {
    sort(cand.begin(),cand.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, tar, cand, ans, ds);
    return ans;
  }
};

int main() {
  Solution obj;

  vector<int> v{10,1,2,7,6,1,5};
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

