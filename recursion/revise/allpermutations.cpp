//  using the extra space

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void findPermutationsUsingSpace(vector<int>& nums, vector<int>& ds, vector<bool>& visited, vector<vector<int>>& ans){
  if(ds.size()==nums.size()){
    ans.push_back(ds);
    return;
  }

  for(int i=0;i<nums.size();i++){
    if(!visited[i]){
      visited[i]=true;
      ds.push_back(nums[i]);
      findPermutationsUsingSpace(nums,ds,visited,ans);
      ds.pop_back();
      visited[i]=false;
    }
  }
}
void printPermutationsUsingSpace(vector<int> &nums){
  vector<vector<int>> ans;
  vector<int>ds;
  vector<bool> visited(nums.size(),false);
  findPermutationsUsingSpace(nums,ds,visited,ans);

  for(auto i:ans){
    for(auto num:i) cout << num<< " ";
    cout << endl;
  }
}

int main() {
    vector<int> nums = {1, 2, 3};
    cout << "Permutations using extra space:\n";
    printPermutationsUsingSpace(nums);
    return 0;
}
