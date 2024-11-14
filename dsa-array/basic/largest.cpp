#include<bits/stdc++.h>
using namespace std;

int main(){
  // use this method brute => better => optimal
  
  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);

  // brute will be sort the array and get the last index
  
  // time complexity will be the n*log(n)
  // space complexity is o(1)


  // optimal solution

  int large = arr[0],index=0;

  for(int i=0;i<n;i++){
    if(arr[i]>= large){
      large = arr[i];
      index=i;
    }
  }
  cout << "index is : " << index<< " value is : "<< large<<endl;


  return 0;
}
