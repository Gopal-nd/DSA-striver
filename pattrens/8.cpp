#include<bits/stdc++.h>
using namespace std;

// *********
//  *******
//   *****
//    ***
//     *

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout << " ";
        }
    for(int j=0;j<2*5-2*i-1;j++){
        cout << "*";
    }
    for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }

  return 0;
}
