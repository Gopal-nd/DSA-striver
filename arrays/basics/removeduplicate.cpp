#include<bits/stdc++.h>
using namespace std;


int main(){
    // brute force approch
   int arr[5] = {1,2,2,3,5};
   int i=0;
   for(int j=0;j<5;j++){
    if(arr[i]!=arr[j]){
    arr[i+1] = arr[j];
    i++;
    }
   }
   cout << i+1;

  return 0;
}
