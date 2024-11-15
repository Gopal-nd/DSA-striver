#include<bits/stdc++.h>
using namespace std;

int main(){

  // problem uniqe and sorted


  int arr1[6]={1,1,2,3,4,5};
  int arr2[6]={2,3,4,4,5,6};
  int n1=6,n2=6;
  int i=0,j=0;
  vector<int> un;

  // pronlem is to union to store the uniqe elemts in the array

  // brute force :
  // create a set and insert teh both arry i them and union to iterate the ans
// tc => o(n logn)+o(n logn)+o(n1+n2)
  // sc => o(n1+n2);

  // optimal solution
  
  //using two pointer approch
  
  while (i<n1 && j<n2) {
   
    if(arr1[i]<=arr2[j]){
      if(un.size()==0||un.back()!=arr1[i]){
        un.push_back(arr1[i]);
      }
      i++;
    }else{

      if(un.size()==0||un.back()!=arr2[j]){
        un.push_back(arr2[j]);
      }
      j++;
    }
  }

  while (j<n2) {
    
      if(un.size()==0||un.back()!=arr2[j]){
        un.push_back(arr2[j]);
      }
      j++;

  }

  while (i<n1) {
          if(un.size()==0||un.back()!=arr1[i]){
        un.push_back(arr1[i]);
      }
      i++;

  }

for(auto i:un){
    cout << i << " ";
  }

// time complexity -> o(n1+n2)
  // space complexity -> o(n1+n2) use to return;
  return 0;
}
