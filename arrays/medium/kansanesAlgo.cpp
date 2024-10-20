#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]= { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans =7; // this should be final answer
    //better one

    int maxi = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int sum =0;
        for(int j=i;j<n;j++){
            sum +=arr[j];
            maxi=max(maxi,sum);
        }

    }
    cout << maxi;

    //optimal solution
    int maxi= INT_MIN;
    int sum =0;
    int startPoint=-1;
    int EndPoint=-1;
    int start;
    for(int i=0;i<n;i++){
        if(sum ==0) start=i;
        sum +=arr[i];
        if(maxi<sum){
            maxi=sum;
            startPoint=start,EndPoint=i;
        }
        if(sum<0){
            sum =0;
        }
    }
    cout << maxi;

  return 0;
}
