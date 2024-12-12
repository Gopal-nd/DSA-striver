#include<bits/stdc++.h>
using namespace std;


int cala(vector<int> &arr, int k){
  int maxsum =INT_MIN;
  int l =0 ,n = arr.size();
  int r = k-1,sum =0;
  for(int i=0;i<k;i++){
   sum+= arr[i]; 
  }
  maxsum = sum;
  while (r<n-1) {
   sum = sum -  arr[l];
    l++;
    r++;
    sum = sum + arr[r];
    maxsum = max(maxsum,sum);
  }

  return maxsum;
}

int main(){

  vector<int> arr = {1,-4,5,3,-2,9,5,3,7,1};
  int maxSum =0, k=4;

  maxSum = cala(arr,k);
  cout << "max sum = " << maxSum;
  return 0;
}
