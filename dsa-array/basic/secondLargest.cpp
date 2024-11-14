#include<bits/stdc++.h>
using namespace std;

int main(){
  // brute force is to sort the array and get the second largest number in the array and also if it is duplicated  it need to run for loop
  //int largest =arr[n-1];
  //int sec = INT_MIN;
  //for(int i=n-2;i=0;i--){
  //if(arr[i]!=largest&& arr[i]>sec)
  //sec= arr[i]
  //}
  // time-> O(n*logn)+O(n)
  // space -> O(1)
  int arr[7] ={6,6,6,6,6,6,6};
  int n =7;

  //bettre solution
  //run two for loops one for the large and the small

  // optimal solution 
  int lg = INT_MIN;
  int sec = INT_MIN;
  int tr = INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>lg){
      tr=sec;
      sec = lg;
      lg=arr[i];
    }else if(arr[i]>sec && arr[i]>tr && arr[i]!=lg && arr[i]!=sec) {
      tr=arr[i];
    }
  }
  cout << sec<< " "<< tr; 
  return 0;
}
