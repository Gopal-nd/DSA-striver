#include<bits/stdc++.h>
using namespace std;

int main(){

  // problem is to find the missing number in the array
  //(conditions is it is sorted and it is up to given n numbers
  //only)
  // brute force
  // 
  // loop array form 0 to n 
  // and find the missing one
  int arr[5] = {1,2,4,5,6};
  int n=5;
for(int i=1;i<=n;i++){
    int flag =0;
  for(int j=0;j<n;j++){
    if(arr[j]==i){
        flag = 1;
        break;
      }
  }
    if(flag==0){
     // cout << i;
    }
  }
// better is to use  the hashing
  int hash[6]={0};

  for(int i=0;i<n;i++){
    if(arr[i]>=0 && arr[i]<n)
    hash[arr[i]]++;
  }
  for(int i=1;i<n;i++){
    if(hash[i]==0){
      cout << "\n"<< i<< endl;
    }
  }

  //optimal solution
  //1. is using the sum value
  //2. using XOR

  //sum 
  int sum =(n*(n+1))/2,fians =0;
  for(int i=0;i<n;i++){
    fians = fians+arr[i];
  }
  cout << abs(sum-fians);


  //XOR symobole(^)
  //eg: a^a=0
  //0^2=2
  //0^0=0
  
  int XOR1=0,XOR2=0;
  for(int i=0;i<n;i++){
    XOR2 = XOR2 ^ arr[i];  //using the arr
    XOR1 = XOR1^(i+1);  // using the natural numbers
  }
  XOR1 = XOR1^n;
  cout << XOR1; // most propably it should be 0

  cout << (XOR1^XOR2);

  return 0;
}
