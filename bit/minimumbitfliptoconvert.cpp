
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

int countsetbits(int num){
  int count =0;
  while (num>0) {
   count +=(num&1);  // increment count if the last bit is 1;
    num>>=1;
  }
  return count;
}
int countFlips(int a,int b){
  int XOR = a^b;
  return countsetbits(XOR);
}
int main(){
  int start = 10,goal=7;
  std::cout << countFlips(start,goal);
  


 }
