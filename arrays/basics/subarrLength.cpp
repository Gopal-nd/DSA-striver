#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[10] = {1,2,3,4,4,5,1,1,1,1};
    int count=0,maxx=0,len=0;
    for(int i=0;i<10;i++){
            int sum =0;
        for(int j=i;j<10;j++){
            
                sum+=arr[j];
                if(sum ==3) len = max(len,j-i+1);
            
        }
    }
    cout << len;
  return 0;
}
