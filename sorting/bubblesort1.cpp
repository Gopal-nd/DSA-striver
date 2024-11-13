
#include<bits/stdc++.h>
using namespace std;

void Print(int n,int arr[]){
  for(int i=0;i<n;i++){
    cout << arr[i]<< " ";
  }
  cout << endl;
}
void bubble(int n,int arr[]){
for(int i=0;i<n-1;i++){
    
  bool  flag = true;
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        flag = false;
      }
    }
    if(flag) break;
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
  bubble(n,arr);
  Print(n,arr);
  
}
