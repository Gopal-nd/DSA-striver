


#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size(); //size of the array.
    if (n == 1) return arr[0];
    int ans = 0;
    for(int i=0;i<n;i++){
   // if(i==0){
   // if(arr[i]!=arr[i+1]){
   //   return arr[i];
   // }
   // }else if(i==n){ if (arr[n]!=arr[n-1]) {
   //   return arr[n];
   // }}else {
   //   if(arr[i]!=arr[i-1]&&arr[i]!=arr[i+1]){
   //     return arr[i];
   //   }
   // }
    ans = ans ^ arr[i];
  }
  //return -1;
  return ans;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}


