
#include<bits/stdc++.h>
using namespace std;

int convertToBinary(int n){
  string ans;
  while (n>0) {
   if(n%2==0){
      ans+='0';
    }else {
      ans+='1';
    } 
    n=n/2;
  }
  reverse(ans.begin(),ans.end());
return stoi(ans);
}
int convertToDecimal(int n){
  string temp = to_string(n);
  n =0;
  for(int i=temp.size()-1;i>=0;i--){
    n+=(temp[i]-'0')*pow(2,temp.size()-1-i);
  }
  return n;
}
int main(){
  int a=5,b=3;
  a=a^b;
  b=a^b;
  a=a^b;
  cout << a << " "<< b<<endl; 
 }
