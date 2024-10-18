#include<bits/stdc++.h>
using namespace std;


int main(){
   //brute force 
   int arr[5]={11,2,2,11,5};
   for(int i=0;i<5;i++){
   int count=0;
    for(int j=0;j<5;j++){
        if(arr[j]==arr[i]){
            count++;
        }
    }
    if(count ==1)
     cout << arr[i];
   } 
   //hashing
   int mini = arr[0];
   for(int i=0;i<5;i++){
    mini = max(mini,arr[i]);
   }
    int hash[mini] = [0]
    for(int i=0;i<5;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<5;i++){
        if(hash[arr[i]]==1){
            cout << arr[i];
        }
    }
    // time O3{n}
    //
    // using the map 

    unordered_map<long,long> m;
    for(int i=0;i<5;i++){
        m[arr[i]]++;
    }
    for(auto i:m){
        if(i.second ==1){
            count << i.first;
        }
    }
    // optimal solution
    // XOR property
    int XOR =0;
    for(int i=0;i<5;i++){
        XOR=XOR^arr[i];
    }   
    cout << XOR;

  return 0;
}
