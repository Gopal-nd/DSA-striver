#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
if(n<=1) return false;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return false;
  }
  return true;
}

int main(){
  int n;
  cin>> n;
  vector<int> ans;

  for(int i=1;i<=sqrt(n);i++){
    if(n%i==0 && prime(i)){
      
      ans.push_back(i);
      if(i!=n/i && prime(n/i)){
        ans.push_back(n/i);
      }
    }
  }

  for(auto i:ans){
    cout << i << " ";
  }
  
}
