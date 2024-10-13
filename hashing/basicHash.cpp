#include<bits/stdc++.h>
using namespace std;

// if it is global it can go up to 10 power 7

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    // pre computation
    // hash can go up to 10 power 6 only
    int hash[13]={0};  // assuming there will be numbers only between 1 to 12

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }


    int q;
    cin>>q; // how many querys
    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }

  return 0;
}
