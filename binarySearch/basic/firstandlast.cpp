#include<bits/stdc++.h>
using namespace std;

// int solve(int n,int key,vector<int> v){
//     int idx =-1;
//     for(int i=n-1;i>=0;i--){  // if go from first it is not so peforments ,so go from theback
//         if(v[i]==key){
//             idx=i;
//             break;
//         }
//     }
//     return idx;
// }

int solev(int n,int k,vector<int> v){
    int start =0;
    int end = n-1;
    int res =-1;

    while(start<=end){
        int mid = start+(end-start)/2;
        if(v[mid]==key){
            res = mid;
            start=mid+1;
        }else if(key <v[mid]){
            end = mid -1;
        }else{
            start = mid+1;
        }
    }
    return res;
}


int main(){
    int n=7;
    int key = 13;
    vector<int> v = {3,4,13,13,13,20,40};
    cout << solve(n,key,v) << "\n";
    return 0;
}