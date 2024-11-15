#include<bits/stdc++.h>
using namespace std;

int main(){

  // find the number that apperers once and others twice

  //brute force approche
  int arr[7] = {1,1,2,2,3,4,4};
  int n =7;
  for(int i=0;i<n;i++){
    int cnt =0;
    for(int j=0;j<n;j++){
      if(arr[i]==arr[j]){
        cnt++;
      }
    }
    if(cnt ==1){cout << arr[i]<<endl;}
  }
  // time -> n*2
  // space -> o(i)
  //
  // // better approche
  // using hashing 
  unordered_map<int,int> hash;

  for(int i=0;i<n;i++){
    hash[arr[i]]++;
  }
  for(int i=0;i<n;i++){
    if(hash[arr[i]]==1){
      cout << arr[i];
    }
  }

for(auto i:hash){
    if(i.second ==1){
      cout << i.first<<" ";
    }
  } 


  //optimal solution
  //usong the xor
  int xo=0;
  for(int i=0;i<n;i++){
    xo = xo ^arr[i];
  }
  cout << xo;
  return 0;
}
