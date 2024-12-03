
//  using the extra space

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void findPermutationsUsingSpace(vector<int>& nums,int index, vector<vector<int>>& ans){
  if(index==nums.size()){
    ans.push_back({nums});
    return;
  }

  for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        findPermutationsUsingSpace(nums,index+1,ans);
        swap(nums[index],nums[i]);
  }
}
void printPermutationsUsingSpace(vector<int> &nums){
  vector<vector<int>> ans;

  findPermutationsUsingSpace(nums,0,ans);

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
