#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[10] = {1,2,3,4,5,6,7,23,4,56};
    int arr2[5]= {2,323,45,756,7};
    int n1=10;
    int n2 =5;
    // brute force;
    set <int> s;
    for(int i=0;i<10;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<5;i++){
        s.insert(arr2[i]);
    }
    for(auto it :s){
        cout<<it<<endl;
    }
    
    //optimal 
    int i=0;
    int j=0;
    vector <int> unionArr;
    while(i<n1 && j<n2){
        if(arr[i] <=arr2[j]){
            if(unionArr.size()==0 || unionarr.back()!=arr(i)){
                unionArr.push_back(arr(i));
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionarr.back()!=arr2(j)){
                unionArr.push_back(arr2(j));
            }
            j++;
        }
    }
    while(j<n2){
         if(unionArr.size()==0 || unionarr.back()!=arr2(j)){
                unionArr.push_back(arr2(j));
            }
            j++;
    }

    while(i<n1){
         if(unionArr.size()==0 || unionarr.back()!=arr(i)){
                unionArr.push_back(arr(i));
            }
            i++;
    }
  return 0;
}
