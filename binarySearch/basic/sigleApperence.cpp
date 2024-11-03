#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int n = 11;
    for(int i=0;i<n;i++){
        int temp = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                temp++;
            }
        }
        if(temp==1){
            cout << arr[i];
        }
    }
}