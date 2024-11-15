#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // fund the longest numbers of specific degit given 

  int arr[6] = {1,0,1,1,1,0};
int n =6;
  int cnt =0;
  int now=0;

  for(int i=0;i<n;i++){
    if(arr[i]==1){
      now ++;
      cnt = max(cnt,now);
    }else{
      now =0;
    }
  }
  cout << cnt;

  return 0;
}
