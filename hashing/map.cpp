#include<bits/stdc++.h>
using namespace std;

// map is map of key and value
// key must be unique
// is more efective than arr 
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>> a[i];
    }
    // craete a map for the store 

    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<mpp[number]<<endl;
    // }
    for(auto it:mpp){
        cout << it.first <<" = "<<it.second<<endl;  
    }

  return 0;
}
