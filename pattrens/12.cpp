#include<bits/stdc++.h>
using namespace std;

// 1      1
// 12    21
// 123  321
// 12344321

int main(){
    int n = 4;
    for(int i=0;i<4;i++){
       for(int j=0;j<=i;j++){
            cout << j+1;
        }
        for(int j =0;j<(2*n)-2*(i+1);j++){
            cout <<" ";
        }
        for(int j=i;j>=0;j--){
            cout <<j+1 ;
        }
        cout << endl;
    }
    

  return 0;
}
