


#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
  string w = "silent";
  string s = "silent";

  if(s.size()!=w.size()){
    cout << "not equal";
  }
  int i=0;
  int j=0;
  int n = s.size();
  while(n){
    if(s[n]!=w[n]){
      cout << "not equle";
    }
    n--;
  }

  cout <<"thsi is the thing";
  return 0;
 }

//another approch is to sort both and compare if not  return false
