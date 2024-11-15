
#include<bits/stdc++.h>
using namespace std;

int main(){

  // problem intersection and sorted


  int arr1[6]={1,1,2,3,4,5};
  int arr2[6]={2,3,4,4,5,6};
  int n1=6,n2=6;
  int i=0,j=0;
  vector<int> inter;

  // pronlem is to union to store the intersection elemts in the array

  // brute force :
  // create a intersection variable to store all dulicate values 
 for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j] && (inter.empty() || inter.back() != arr2[j])) {
                inter.push_back(arr2[j]);
            }
        }
    }
// tc => o(n1*n2)
  // sc => o(n1+n2);

  // optimal solution
  
  //using two pointer approch
  
while (i<n1 && j<n2) {
   
    if(arr1[i]<arr2[j]){
            i++;
    }else if(arr2[j]<arr1[i]){

           j++;
    }else{
      inter.push_back(arr1[i]);
      i++;
      j++;
    }
  }

  
for(auto i:inter){
    cout << i << " ";
  }

// time complexity -> o(n1+n2)
  // space complexity -> o(1) use to return;
  return 0;
}
