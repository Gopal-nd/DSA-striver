
#include<bits/stdc++.h>
using namespace std;

int main(){
  // use this method brute => better => optimal
  
  int arr[] = {1,0,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);

// check if the digit is smaller or eq to previous on 

  for(int i=1;i<n;i++){
    if(arr[i-1]<=arr[i]){

    }else {
      cout << "not sorted";
    }
  }

  return 0;
}
