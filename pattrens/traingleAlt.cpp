#include<bits/stdc++.h>
using namespace std;


int main(){
  int n = 5;

  for(int i=1;i<2*n;i++){
    int star = i;
    if(i>n) star = 2*n-i;
    int des = 1;
    if(i%2==0)des = 0;
    for(int j=0;j<star;j++){
      if(i%2==0){
       
        if(des == 1){
          cout << "*";
        }else{
          cout << " ";
        }
        des = !des;
      }else{
       if(des == 1){
          cout << "*";
        }else{
          cout << " ";
        }
        des = !des;
      }
    }
    cout <<  endl;
  }
}
