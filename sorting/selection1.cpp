#include<bits/stdc++.h>
using namespace std;

void Print(int n,int arr[]){
  for(int i=0;i<n;i++){
    cout << arr[i]<< " ";
  }
  cout << endl;
}
void selection(int n,int arr[]){
  for(int i=0;i<n-1;i++){

  int temp = i;
    for(int j=i+1;j<n;j++){
      if(arr[temp]>arr[j]){
        temp = j;
      }
    }
    swap(arr[i],arr[temp]);
  }
}
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>> arr[i];
  }
  Print(n,arr);
  selection(n,arr);
  Print(n,arr);
  
}
