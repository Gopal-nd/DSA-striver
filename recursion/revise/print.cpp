#include<iostream>
using namespace std;

void print(int n){
  if(n==5){
    return;
  }
  cout << n;
  print(n+1);
  
}
void print1ton(int n){
  if(n==5){
    return;
  }
  cout<< n+1;
  print1ton(n+1);
}
void printnto1(int n){
  if(n==5){
    return;
  }
  printnto1(n+1 );
  cout << n+1;
}

int main(){
print(0);
print1ton(0);
  printnto1(0);
  return 0;
}
