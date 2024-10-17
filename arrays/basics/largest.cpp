#include<bits/stdc++.h>
using namespace std;

//tip : 1) brut force first then optimize
// 2) even you know ans don't say directly  write your code


//  for the index its n
int main(){
// for the value n-1
 int arr[5]={1,2,3,4,5};

 int n = sizeof(arr)/sizeof(arr[0]);

int max = arr[0];
for (int i=1;i<n;i++){
    if(arr[i]>max){
        max= arr[i];
    }
}
cout << max << endl;
  
  return 0;
}
