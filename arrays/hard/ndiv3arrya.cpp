#include<bits/stdc++.h>
using namespace std;

int linearSearch(int target, int arr[],int n){
    int temp =0;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            temp++;
        }
    }
    return temp;
}

int main(){
    int arr[]={11,33,33,11,33,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> ans;
    for(int i=0;i<n;i++){
        int num = linearSearch(arr[0],arr,n);
        if(num>2 ){
            if(find(ans.begin(),ans.end(),arr[i])==ans.end()){
            ans.push_back(arr[i]);
            }
        }
    }
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it :mpp){
        if(it.second>2){

        cout << it.first <<" ";
        }
    }
    
    for(auto it :ans){
        cout << it <<" ";
    }

  return 0;
}
