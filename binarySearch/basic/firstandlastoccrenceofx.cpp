#include<bits/stdc++.h>
using namespace std;


// using the linear search 
pair<int,int> FLoccurence(vector<int> &arr,int target){
  int n = arr.size();
  int first =-1,last =-1;
  for(int i=0;i<n;i++){
    if(arr[i]==target){
      if(first == -1){
        first = i;
      }
      last = i;
    }
  }  // time complexity is 0(n) space = o(1)
  return {first,last};
}

// using the concept of lower bound and upper bound
int lowerBound(vector<int> arr,int target ){
  int n = arr.size();
  int low =0;
  int high = n-1;
  int ans = n;
  while(low<=high){
    int mid = (low +high)/2;
    if(arr[mid]>=target){
      ans = mid;
      high = mid-1;
    }else  {
     low = mid+1; 
    }
  }
  return ans;
}

int upperBound(vector<int> arr,int target){
  int n = arr.size();
  int low =0;
  int high = n-1;
  int ans =n;
  while (low<=high) {
   int mid = (low+high)/2;
    if(arr[mid]>target){
      ans = mid;
      high = mid-1;
    }else {
      low = mid+1;
    }
  }
  return ans;
}
pair<int,int> fl(vector<int> arr,int target){
  int first = lowerBound(arr,target);
  int last = upperBound(arr,target)-1;
  if(first == arr.size() || arr[first] != target) {
        return {-1, -1};
    }
    return {first, last};}


int first(vector<int> arr,int target){
  int low = 0;
  int n = arr.size();
  int high = n-1;
  int ans = -1;  
  while (low<=high) {
    int mid = (low+high)/2;
    if(arr[mid]==target){
      ans = mid;
      high = mid-1;
    }else if (arr[mid]>target) {
      high = mid -1;
    }else {
      low = mid+1;
    }
  }
  return ans;
}

int last(vector<int> arr, int target) {
    int low = 0;
    int n = arr.size();
    int high = n - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevent overflow
        if (arr[mid] == target) {
            ans = mid;  // Update potential answer
            low = mid + 1; // Move to the right to find the last occurrence
        } else if (arr[mid] > target) {
            high = mid - 1; // Search in the left half
        } else {
            low = mid + 1; // Search in the right half
        }
    }
    return ans;
}
int main(){
  vector<int> arr = {1,2,3,3,3,4,5,6,7};
  pair<int,int> ans,ans1,ans2;
  
  int f = first(arr,3);
  int l = last(arr,3);
  std::cout << f;
  std::cout << l;
  ans = FLoccurence(arr,0);
  ans1 = fl(arr,1);
  cout << ans1.first<<"  "<<ans1.second<< endl;
  cout << ans.first<< "  "<<ans.second;

  return 0;
}
