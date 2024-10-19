#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[6] = {2,0,2,1,1,0};
//brute force;

    // for (int i=0;i<6;i++){
    // bool turn = true;
    //     for(int j=0;j<5-i;j++){
    //         if(nums[j]>nums[j+1]){
    //             swap(nums[j],nums[j+1]);
    //             turn = false;
    //         }
    //     }
    //     if(turn == true) break;
    // }

    // better method 

    // int ones=0,two=0,three=0;
    // for(int i=0;i<6;i++){
    //     if(arr[i]==0){
    //         ones++;
    //     }else if(arr[i]==1){
    //         two++;
    //     }else{
    //         three++;
    //     }
    // }
    // for(int i=0;i<ones;i++) arr[i]=0;
    // for(int i=ones;i<ones+two;i++) arr[i]=1;
    // for(int i=ones+two;i<ones+two+three;i++) arr[i]=2;


    // optimal solution
   int low =0,int mid=0,high=5;
   while(mid<=high){
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        mid++;
        low++;
    }else if(arr[mid]==1){
        mid++;
    }else{
        swap(arr[mid],arr[high]);
        high--;
    }
   }
    for(int i : arr){
        cout << i<<" ";
    }
  return 0;
}
