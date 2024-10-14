// swaping the adjecent elements
// push the max at last 

#include<bits/stdc++.h>
using namespace std;


void Bubbalesort(int n,int arr[]){
 for(int i=0;i<n-1;i++){
    bool turn = false;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            turn=true;
        }
    }
    if(!turn) break;
 }
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n-1;i++){
    cin>> arr[i];
    }
    cout << endl;
  
  Bubbalesort(n,arr);
  for(int i=0;i<n;i++){
    cout << arr[i] <<" ";
  }

  return 0;
}
