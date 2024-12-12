
#include<bits/stdc++.h>
using namespace std;


int cala(vector<int> &arr, int k){
  int maxlen =INT_MIN;
  int l =0,r=0,sum =0;
  while (r<arr.size()-1) {
   sum = sum + arr[r];
    while (sum>k) {
      
      sum = sum - arr[l];
      l++;
    }
    if(sum<=k){
      maxlen = max(maxlen,r-l+1);
    }
    r++;
  }
  return maxlen;
}

// for the optimal we use the constant k


int cala(vector<int> &arr, int k){
  int maxlen =INT_MIN;
  int l =0,r=0,sum =0;
  while (r<arr.size()-1) {
   sum = sum + arr[r];
    if(sum>k) {
      
      sum = sum - arr[l];
      l++;
    }
    if(sum<=k){
      maxlen = max(maxlen,r-l+1);
    }
    r++;
  }
  return maxlen;
}



int main(){

  vector<int> arr = {1,-4,5,3,-2,9,5,3,7,1};
  int maxlen=0, k=10;

  maxlen = cala(arr,k);
  cout << "max len = " << maxlen;
  return 0;
}
