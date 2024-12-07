#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
int c=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      c++;
      if((n/i)!=i) c++;
    }
  }
  return c==2?true:false;
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
