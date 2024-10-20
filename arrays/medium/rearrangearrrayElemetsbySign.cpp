#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1,2,-4,-5};
    int n= sizeof(arr)/sizeof(arr[0]);

    vector <int> result(n);
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            result[pos]=arr[i];
            pos=pos+2;
        }else{
            result[neg]=arr[i];
            neg=neg+2;
        }
    }
    for(auto i:result){
        cout << i<<" ";
    }
   
  return 0;
}
