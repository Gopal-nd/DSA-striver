#include<bits/stdc++.h>
using namespace std;


int main(){
    map<int,int> mpp;
    // used to store the key value paires
    // unique key but duplecate value can possible
    mpp[1]=2;


    mpp.insert({2,4});

    for(auto it:mpp){
        cout << it.first <<" = "<<it.second;
    }

  return 0;
}
