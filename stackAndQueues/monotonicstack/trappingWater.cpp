#include<bits/stdc++.h>

using namespace std;
int trap(vector < int > & height) {

  int n = height.size();
  int l =0, r = n-1;
  int lmax = 0,rmax =0, total =0;

  while (l<=r) {
   if(height[l]<=height[r]){
      if (height[l] >= lmax) {
        lmax = height[l];
      }else {
        total += lmax -height[l];
      }
      l++;
    }else {
      if (height[r]>=rmax ) {
        rmax = height[r];
      }else {
        total += rmax - height[r];
      }
      r--;
    } 
  }

  return total;

}

int main() {
  vector < int > arr;
  arr = {0,1,0,2,1,0,1,3,2,1,2,1};
  cout << "The water that can be trapped is " << trap(arr) << endl;
}
