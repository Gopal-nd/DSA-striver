#include<bits/stdc++.h>
using namespace std;

int main(){

  // problem is to put all zeros at the end of the array

  int arr[] = {1,0,2,3,2,0,0,4,5,1};
  int n = sizeof(arr)/sizeof(arr[0]);

  // brute is to get all the non zero in temp and loop again to the first array and fill rmaining with zero
  // tc -> o(n)+o(x)+o(n-x) => o(2n)
  // sc => o(n)

// optimall solution
  
  int j=-1
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      j=i;
      break;
    }
  }  // kepping the pointer in the zerose place 
  if(j==-1) {cout << "no element";}

  for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
      swap(arr[i],arr[j]);  //swaping non zero element in the place of zeo elemnt place
      j++;
    }
  }
  return 0;
}
