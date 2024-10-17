#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[10]={1,2,3,40,4,0,32,0,4,0};
    int n=10;
    int j =-1;

    // geting the inital and validating if there is any 0 or not
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    // if(j==-1) return arr;

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    // return arr;

    for(int i=0;i<n;i++){
        cout << arr[i];
    }

  return 0;
}
