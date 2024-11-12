#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[5] = {1,23,4,9,12};
sort(arr,arr+5,greater<int>());
  for(auto it:arr){
    cout << it << " ";
  }
}
