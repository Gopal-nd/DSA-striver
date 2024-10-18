#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[15]={1,1,1,0,1,1,0,1,1,0,1,1,1,1,0};
    vector<int> v;
    int maxx;
    int count=0;
    for(int i=0;i<15;i++){
        if(arr[i]==1){
            count++;
            maxx= max(counr,maxx);
        }else{
           
            count =0;
        }
    }
    // for(auto it:v){
    //     cout << it<< " ";
    // }
    // int maxV=*v.max_size();
    // cout << maxV<< " ";
    cout << maxx<< " ";
    

  return 0;
}
