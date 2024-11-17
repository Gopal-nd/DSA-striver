#include<bits/stdc++.h>
using namespace std;


int binary(int arr[], int low,int high, int target){
  if(low<=high){
    return -1;
  }
  int mid = (low+high)/2;
  if(arr[mid]==target)return mid;
  if(target>arr[mid]){
    binary(arr,mid+1,high,target);
  }else{
    binary(arr,low,mid-1);
  }
}

int main(){
  
  // it can be used only when the arr is sorted
  // it is uniqe elements
  
  int arr[] = {3,4,6,7,9,12,16,17};
  int n = sizeof(arr)/sizeof(arr[0]);

  int target = 6;
  int low =0,high= n-1;
  while(low<=high){
    mid = (low+high)/2;
    if(arr[mid]==target) return mid;
    else if(target >arr[mid]) low = mid+1;
    else {
      high = mid-1;
    }
  }

  // time complexty o(log2n)
  //
  // limitation overflow case
  // if arr = INT_MAX
  // then low = INT_MAX,hifg = INT_MAX ,so low+high/2 will overflow 
cout << "notfound "
  return 0;
}
