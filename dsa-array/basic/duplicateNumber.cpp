#include<bits/stdc++.h>
using namespace std;


// remove duplicate elements in a array
int main(){

  // brute force is to use the set that stores the uniqe elemnts st->o(n*nlog)


   
  int arr[] = {1,2,3,3,3,3,3,3,33,44};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int> s;
  for(int i=0;i<n;i++){
  if(arr[i-1]!=arr[i]){
      s.push_back(i);
    }
  }
  cout << s.size();
  return 0;
}
