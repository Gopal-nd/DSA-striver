#include<bits/stdc++.h>
using namespace std;

int main(){

  // problem : to find the largest contigues subarray with sum od K

  int arr[] = {1,2,3,1,1,1,1,4,2,3};
  int n = 10;
  int k = 3;
  int len=0;
  int maxl =0;

  // btute force is to genrate all the subarrays
  for(int i=0;i<n;i++){
    for(int j=i;j<=n;j++){
      int sum =0;
      for (int t = i;t<j;t++){
        sum = sum+arr[t];
      }if(sum ==k){
        len = max(len,j-i);
      }

      cout <<endl;
    }cout << endl;
  }
cout << len;
  //time complexity is 0(n*n*n)
  //space complexity is o(1)

   len =0;
   maxl = 0;
  
for(int i=0;i<n;i++){
    int sum =0;
    for(int j=i;j<n;j++){
      sum = sum +arr[j];
    if(sum == k){
      len = max(len,j-i+1);
    }
    }
  }
cout << len;
  //time complexity is 0(n*n*)
  //space complexity is o(1)

  //better  using the hashing
  //
  //works both for the positive and negative numbers 
  
  map<int, int> psum;
     maxl = 0; // Maximum length of subarray
    int sum = 0;  // Prefix sum

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // Case 1: If sum equals k, update max length
        if (sum == k) {
            maxl = max(maxl, i + 1);
        }

        // Case 2: Check if the remaining sum (sum - k) exists
        int rem = sum - k;
        if (psum.find(rem) != psum.end()) {
            int len = i - psum[rem];
            cout << "Subarray found at: " << psum[rem] + 1 << " to " << i << " (Length: " << len << ")\n";
            maxl = max(maxl, len);
        }

        // Case 3: Store the first occurrence of this prefix sum
        if (psum.find(sum) == psum.end()) {
            psum[sum] = i;
        }
    }

    cout << "\nMaximum length of subarray with sum " << k << " is: " << maxl << endl;
   
  // tc -> o(n*logn)
  // sc -> o(n)
  return 0;
}
