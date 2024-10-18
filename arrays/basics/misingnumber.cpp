#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=5;
    arr[n] = [1,2,4,5];

    // brute force
    for (int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n;j++){

        if(arr[j]==i){
            flag =1;
            break;
        }
        }
        if(flag ==0) return i;
    }

    //better 
    int hash[6] = {0};
    for (i=0;i<6;i++){
        hash[arr[i]]++;
    }for(int i=0;i<6;i++){
        if(has[i]==0){
            cout << i<< endl;
        }
    }
    // optimal solution 1
    sum = n*(n+1)/2;
    s2 =0;
    for(int i=0;i<n;i++){
        s2=s2+arr[i];
    }
    return sum-s2;

    //optimal solution 2
    // XOR 
   int xor1 =0;
   int xor2=0;
    for(int i=0;i<n;i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }
    xor1 =xor1^n;
    return xor1^xor2;


  return 0;
}
