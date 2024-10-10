#include<bits/stdc++.h>
using namespace std;

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

int main(){
    int n=5;
    for(int i =0;i<n;i++){
        for (int j =0;j<5-i;j++){
            cout << "*";
        }
        for(int j=0;j<2*i;j++){
            cout <<" ";
        }
       for (int j =0;j<5-i;j++){
            cout << "*";
        }cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<n*2-2*i -2;j++){
            cout << " ";
        }
        for(int j =0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }


  return 0;
}
