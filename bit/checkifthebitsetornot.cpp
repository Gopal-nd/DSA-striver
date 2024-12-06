

#include<bits/stdc++.h>
using namespace std;
int convertToBinary(int n){
  int ans =0;
  while (n!=0) {
   n = n&n-1;
    ans++;
  } 
  
return ans;
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
  int a=13,i=2,n=13;
  // 13 -> 1101
  //
  //
  // left shift
  if((a&(1<<i))!=0){
    cout << "set";
  }else {
    std::cout << "not set";
  }

  cout << endl;

  //rigth shift
  if(((13>>i)&&i)!=0){
    cout << "set";
  }else {
    std::cout << "not set";
  }
  


  cout << endl;
  //set the i th bit to 0 ||1 
  int x =13;
  x=x|1<<2;
  cout << x;
 
  std::cout << endl;
  //clear the i th bit
  n =13;
  n=convertToBinary(n);
  cout <<n;


 std::cout << endl;
  //toggel the i th bit
  n=13;
  i=1;
  n=(n^(1<<i));
  cout <<n;

std::cout << endl;
  // clear the first bit
  n=0;
  n = n&n-1;
  cout << n;

std::cout << endl;
  //  the number of set  bit
  n=13;
  int c=0;

  n = n&n-1;
  cout << n<<" jhwufwe";
cout << endl;

  int r = 13;
  n = convertToBinary(r);
  cout <<n;

 }
