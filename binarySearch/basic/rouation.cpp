
#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
  int low =0,n = arr.size(),high = n-1;
  int ans = INT_MAX,index;
  while (low<=high) {

   int mid = (low+high)/2;
    if(arr[low]<=arr[high]){
      if(arr[low]<ans){
        index= low;
        ans = arr[low];
      }
      break;
    }
    if(arr[low]<=arr[mid]){
      if(arr[low]<ans){
        index = low;
        ans = arr[low];
      }
      low = mid +1;
    }else {
     
      high = mid-1;
      if(arr[mid]<ans){
        index = mid;
        ans = arr[mid];
      }
    }
  }
  return ans;

  // time complexity is o(log2n
  //
  // // time complexity is o(log2n))
}

// time complexity is o(log2n)

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The number of rotated is: " << ans << "\n";
    return 0;
}


