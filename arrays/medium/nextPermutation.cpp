#include<bits/stdc++.h>
using namespace std;
// next pernutaionn steps
// 1. to find the number less than next a[i]<a[i+1]
// 2. to find the number less tha a[i] but smaller among all
// 3. swap those two
// 4. the revers(arr.begin()+i+1,arr.end())

void Nextpermutation(vector<int> &nums){
    int n = nums.size();
    int i= n-2;

    while (i>=0 && nums[i]>=nums[i+1])
    {
        i--;
    }

    if(i>=0){
        int j=n-1;
        while(j>=0 && nums[j]<=nums[i]){
            j--;
        }
        swap(nums[i],nums[j]);
    }

    reverse(nums.begin()+i+1,nums.end());
    
}

int main(){
     vector<int> nums = {1, 2, 3};

    // Print the current permutation
    cout << "Current permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;    
    Nextpermutation(nums);
    cout << "Next Permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;    

  return 0;
}
