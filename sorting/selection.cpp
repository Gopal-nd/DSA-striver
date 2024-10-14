#include<bits/stdc++.h>
using namespace std;


void selectionSort(int n,int arr[]){
  for(int i=0;i<n-1;i++){
    int min =i;
    for(int j=i+1;j<n;j++){
      if(arr[min]>arr[j]){
        min =j;
      }
    }
    swap(arr[min],arr[i]);
  }
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>> arr[i];
  }
  selectionSort(n,arr);
  for(int i=0;i<n;i++){
    cout << arr[i] <<" ";
  }

  return 0;
}
