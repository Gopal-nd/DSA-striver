#include <bits/stdc++.h>
using namespace std;

void pat19(int n){
    int space =0;
    int Rspace =8;
for(int i=0;i<n;i++){
    // number 
    for(int j=0;j<n-i;j++){
        cout << "*";
    }
    //space 
    for (int j =0;j<space;j++){
        cout << " ";

    }
    // number 
    for(int j=0;j<n-i;j++){
        cout << "*";
    }
        space= space+2;
    cout <<endl;
}

for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout << "*";
    }
    //Rspace 
    for (int j =0;j<Rspace;j++){
        cout << " ";

    }
    // number 
    for(int j=1;j<=i;j++){
        cout << "*";
    }
        Rspace= Rspace-2;
    cout <<endl;
}
}
int  main(){
    //functions
    pat19(4);
    return 0;
}