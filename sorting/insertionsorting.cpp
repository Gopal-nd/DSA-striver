// swaping the adjecent elements
// push the max at last 

#include<bits/stdc++.h>
using namespace std;


void InsertionSort(int n,int arr[]){
 for(int i=0;i<n;i++){
    int j =i;
    while(j>0&&arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
 }
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>> arr[i];
    }

  
  InsertionSort(n,arr);
  for(int i=0;i<n;i++){
    cout << arr[i] <<" ";
  }

  return 0;
}