
#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> subsets(vector<int> nums){
   vector<vector<int>> subset;
  int n = nums.size();
  int total = 1<<n;
  for(int i=0;i<total;i++){
    vector<int>sub;
    for(int j=0;j<n;j++){
      if(i&(1<<j)) sub.push_back(nums[j]);
    }
    subset.push_back(sub);
  }
  return subset;
}

int main(){
 vector<int> nums = {1, 2, 3};
    vector<vector<int>> subset;
  subset= subsets(nums);
    return 0;
}
