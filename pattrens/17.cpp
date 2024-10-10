#include<bits/stdc++.h>
using namespace std;

//      A    
//     ABA
//    ABCBA
//   ABCDCBA
int main(){
    int n =4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
            cout <<" ";
        }
        char ch ='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout << ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(int j=0;j<=n-1;j++){
            cout << " ";
        }
        cout << endl;
    }

  return 0;
}
