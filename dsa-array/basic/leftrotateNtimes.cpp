#include<bits/stdc++.h>
using namespace std;


// rotete the elemnets by this number of places in array
int main(){

  // brute force
  // space -> o(d)
  // time -> o(n)

  int arr[] = {1,2,3,3,3,3,3,3,33,44};
  int n = sizeof(arr)/sizeof(arr[0]);
  int number = 3;
  int d = number%n;
  vector<int> s;
  for(int i=n-d;i<n;i++){
    s.push_back(arr[i]);
  }
  for(int i=n-d-1;i>=0;i--){
    arr[i+d]=arr[i];
  }
  for(int i=0;i<d;i++){
    arr[i]=s[i];
  }
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << s.size();


  // better or optimal use the reverse function
  //
  // reverse(arr,arr+d)
  // reverse(arr+d,arr+n)
  // reverse(arr,arr+n)
  return 0;
}
